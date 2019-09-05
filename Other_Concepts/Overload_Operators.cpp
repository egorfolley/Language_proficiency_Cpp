#include <bits/stdc++.h>

class Complex
{
public:
  uint16_t a, b;

  void input(std::string s)
  {
      uint16_t v1 = 0;
      uint16_t i = 0;

      while( s[i] != '+' )
      {
          v1 = v1 * 10 + s[i] - '0';
          i++;
      }

      while( s[i] == ' ' || s[i] == '+' || s[i] == 'i' ) { i++; }

      uint16_t v2 = 0;
      while( i < s.length() )
      {
          v2 = v2 * 10 + s[i] - '0';
          i++;
      }

      a = v1;
      b = v2;
  }
};

Complex operator+(Complex& obj1 , Complex& obj2)
{
   Complex t ;

   t.a = obj1.a + obj2.a;
   t.b = obj1.b + obj2.b;

   return t;
}

std::ostream& operator << ( std::ostream& out , const Complex& obj )
{
    out << obj.a << "+i" << obj.b << std::endl;

    return out;
}

int main()
{
    Complex x,y;

    std::string s1,s2;
    std::cin >> s1 >> s2;

    x.input(s1);
    y.input(s2);

    Complex z = x + y;

    std::cout << z << std::endl;

    return 0;
}
