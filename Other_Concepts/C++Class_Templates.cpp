#include <bits/stdc++.h>

template <class T> class AddElements
{
public:
  T m_elem;
  AddElements( T elem ) { this->m_elem = elem; }
  T add( T input ) { return m_elem + input; }
  T concatenate( T str ) { return m_elem + str; }
};

int main ()
{
  uint16_t n;
  std::cin >> n;

  for( int i = 0; i < n; i++)
  {
    std::string type;
    std::cin >> type;

    if ( type == "float" )
    {
        double element1, element2;
        std::cin >> element1 >> element2;

        AddElements<double> myfloat (element1);

        std::cout << myfloat.add(element2) << std::endl;
    }

    else if ( type == "int" )
    {
        int element1, element2;
        std::cin >> element1 >> element2;

        AddElements<int> myint (element1);

        std::cout << myint.add(element2) << std::endl;
    }

    else if ( type == "string" )
    {
      std::string element1, element2;
      std::cin >> element1 >> element2;

      AddElements<std::string> mystring (element1);

      std::cout << mystring.concatenate(element2) << std::endl;
    }
  }

  return 0;
}
