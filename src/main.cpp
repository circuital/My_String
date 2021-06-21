#include "../include/my_string.h"

int main()
{
  //Constructors & destructors
  //Default constructor
  String s1 = String();

  //One argument constructor
  String s2 = String("Elvira");
  std::cout << s2 << "\n";

  //Copy constructor
  String s3 = String("Sandra");
  String s4 = s3;
  std::cout << s4 << "\n";

  //Move constructor
  String s5 = String("Tobias");
  String s6 = String(std::move(s5));
  std::cout << s6 << "\n";

  //Operators
  //=
  String s7 = String("Luna");
  String s8 = String("Nike");
  s7 = s8;
  std::cout << s7 << "\n";

  //+=
  String s11 = String("Ika");
  String s12 = String(" Bergman");
  s11 += s12;
  std::cout << s11 << "\n";

  //[]
  String s13 = String("Wirena");
  std::cout << s13[2] << "\n";

  //+
  String s14 = String("Katten");
  String s15 = String(" Kreuger");
  std::cout << s14 + s15 << "\n";

  //==
  String s16 = String("Jäger");
  String s17 = String("Jäger");
  if(s16 == s17)
    std::cout << "Equal!" << "\n";
  else
    std::cout << "Not equal!" << "\n";

  // !=
  String s18 = String("Spencer");
  String s19 = String("Tussen");
  if(s18 != s19)
    std::cout << "Not equal!" << "\n";
  else
    std::cout << "Equal!" << "\n";

  //>
  String s20 = String("Nike");
  String s21 = String("Elvira");
  if(s20 > s21)
    std::cout << "Greater than!" << "\n";
  else
    std::cout << "Not greater than!" << "\n";

  //<
  String s22 = String("Nike");
  String s23 = String("Elvira");
  if(s22 < s23)
    std::cout << "Less than!" << "\n";
  else
    std::cout << "Not less than!" << "\n";

  //>=
  String s24 = String("Nike");
  String s25 = String("Elvira");
  if(s22 >= s23)
    std::cout << "Greater or equal to!" << "\n";
  else
    std::cout << "Not greater or equal to!" << "\n";

  //<=
  String s26 = String("Nike");
  String s27 = String("Elvira");
  if(s26 <= s27)
    std::cout << "Less or equal to!" << "\n";
  else
    std::cout << "Not less or equal to!" << "\n";
}