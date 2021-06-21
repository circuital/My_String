#include "../include/my_string.h"

//Constructors & destructors
//Default constructor
String::String()
{
  delete [] str;
  len = 0;
  str = nullptr;
  std::cout << "Default constructor\n";
}

//One argument constructor
String::String(const char* s)
{
  delete [] str;
  len = strlen(s);
  str = new char[len+1];
  strcpy(str, s);
  std::cout << "One argument constructor\n";
}

// Copy constructor DONE
String::String(const String &s)
{
  delete[] str;
  len = s.len;
  str = new char[len + 1];
  std::cout << "Copy constructor\n";
}

//Move constructor DONE
String::String(String &&s)
{
  delete [] str;
  len = s.len;
  str = new char[len+1];
  strcpy(str, s.str);
  delete [] s.str;
  s.len = 0;
  s.str = nullptr;
  std::cout << "Move constructor\n";
}

//Default destructor DONE
String::~String()
{
  delete [] str;
  len = 0;
  str = nullptr;
  std::cout << "Default destructor\n";
}

//Assignment operators
//=
String &String::operator=(const String &rhs)
{
  delete[] str;
  len = rhs.len;
  str = new char[rhs.len + 1];
  strcpy(str, rhs.str);
  std::cout << "= operator\n";
  return *this;
}

//+=
String &String::operator += (const String &rhs)
{
  len = len + rhs.len;
  char* new_str = new char[len+1];
  strcpy(new_str, str);
  strcat(new_str, rhs.str);
  str = new_str;
  std::cout << "+= operator\n";
  return *this;
}

//Element access
//[]
char &String::operator [] (const int &i) const
{
  return str[i];
}

//Arithmetic operators
//+
String operator + (const String &lhs, const String &rhs)
{
  size_t new_len = lhs.len + rhs.len;
  char* new_str = new char[new_len+1];
  strcpy(new_str, lhs.str);
  strcat(new_str, rhs.str);
  String result(new_str);
  std::cout << "+ operator\n";
  return result;
}

//Relational operators
//==
bool operator==(const String &lhs, const String &rhs)
{
  return strcmp(lhs.str, rhs.str) == 0;
}

// !=
bool operator!=(const String &lhs, const String &rhs)
{
  return strcmp(lhs.str, rhs.str) != 0;
}

//>
bool operator>(const String &lhs, const String &rhs)
{
  return lhs.len > rhs.len;
}

//<
bool operator<(const String &lhs, const String &rhs)
{
  return lhs.len < rhs.len;
}

//>=
bool operator>=(const String &lhs, const String &rhs)
{
  return lhs.len >= rhs.len;
}

//<=
bool operator<=(const String &lhs, const String &rhs)
{
  return lhs.len <= rhs.len;
}

//Stream operators
//<<
std::ostream &operator << (std::ostream &o, const String &rhs)
{
  o << rhs.str;
  return o;
}

//>>
std::istream &operator >> (std::istream &i, const String &rhs)
{
  i >> rhs.str;
  return i;
}

