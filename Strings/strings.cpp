#include <iostream>
#include <string>

using namespace std;

int main()
{
  string a, b;
  cin >> a >> b;

  cout << a.size() << " " << b.size() << endl
       << a + b << endl;

  char a_o = a[0];
  char b_o = b[0];

  a[0] = b_o;
  b[0] = a_o;

  cout << a << " " << b;
}
