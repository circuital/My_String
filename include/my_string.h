#ifndef MY_STRING_MY_STRING_H
#define MY_STRING_MY_STRING_H
#endif // MY_STRING_MY_STRING_H

#include <cstring>
#include <iostream>

class String {
  size_t len = 0;
  //char *str = new char[len + 1];
  char* str = nullptr;

public:
  // Constructors & destructors
  String();                // Default constructor
  String(const char *s);   // One argument constructor
  String(const String &s); // Copy constructor
  String(String &&s);      // Move constructor
  ~String();               // Default destructor

  // Assignment Operators
  String &operator=(const String &rhs);  // Assignment operator
  String &operator+=(const String &rhs); // Concatenation operator

  // Element access
  char &operator[](const int &i) const; // Subscript operator

  // Arithmetic operators
  friend String operator+(const String &lhs, const String &rhs); // Addition operator

  // Relational operators
  friend bool operator==(const String &lhs, const String &rhs); // Equal to operator
  friend bool operator!=(const String &lhs, const String &rhs); // Not equal to operator
  friend bool operator>(const String &lhs, const String &rhs);  // Greater than operator
  friend bool operator<(const String &lhs, const String &rhs);  // Less than operator
  friend bool operator>=(const String &lhs, const String &rhs); // Greater or equal to operator
  friend bool operator<=(const String &lhs, const String &rhs); // Less or equal to operator

  // Stream operators
  friend std::ostream &operator<<(std::ostream &o, const String &rhs);
  friend std::istream &operator>>(std::istream &i, const String &rhs);
};
