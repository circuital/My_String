#include <stdio.h>
#include <ctype.h>
#include <cstring>
class String
{
private:
    char *str;

public:
    //Constructor & destructors

    //Default constructor
    String()
    {
        this->str = new char[1];
    }

    //One argument constructor
    String(char *c)
    {
        this->str = new char[strlen(c)];
        strcpy(this->str, c);
    }

    //Copy constructor
    String(String &s)
    {
        this->str = new char[strlen(s.str)];
        strcpy(this->str, s.str);
    }

    //Move constructor
    String(String &&s)
    {
        this->str = new char[strlen(s.str)];
        strcpy(this->str, s.str);
        delete s;
    }

    //Default destructor
    ~String()
    {
        delete this->str;
    };

    //Operators
    String operator=(String &rhs)
    {
        return rhs;
    }

    friend String operator+(const String &lhs, const String &rhs)
    {
        int length = strlen(lhs.str) + strlen(rhs.str);

        char *buff = new char[length + 1];

        strcpy(buff, lhs.str);
        strcpy(buff, rhs.str);

        String temp{buff};

        delete[] buff;
        return temp;
    }

    char String::operator[](int &i)
    {
        return this->str[i];
    }

    bool String::operator==(String &rhs)
    {
        return strcmp(this->str, rhs.str) == 0;
    }

    bool String::operator!=(String &rhs)
    {
        return strcmp(this->str, rhs.str) != 0;
    }

    bool String::operator>(String &rhs)
    {
        return strcmp(this->str, rhs.str) > 0;
    }

    bool String::operator<(String &rhs)
    {
        return strcmp(this->str, rhs.str) < 0;
    }

    bool String::operator>=(String &rhs)
    {
        return strcmp(this->str, rhs.str) >= 0;
    }

    bool String::operator<=(String &rhs)
    {
        return strcmp(this->str, rhs.str) <= 0;
    }

    //Methods
    int length()
    {
        int index = 0;
        while (str[index] != '\0')
        {
            index++;
        }
        return index;
    }

    int size()
    {
        return length();
    }

    char front()
    {
    }

    char back()
    {
    }

    void to_upper(String &s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            toupper(s[i]);
        }
    }

    void to_lower(String &s)
    {
        for (int i = 0; i < s.length(); i++)
        {
            tolower(s[i]);
        }
    }
};
