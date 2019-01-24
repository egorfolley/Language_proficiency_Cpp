#include <iostream>

using namespace std;

int max(int a, int b, int c, int d)
{
  return a > b ? a > c ? a > d ? a : d : c > d ? c : d : b > c ? b > d ? b : d : c > d ? c : d;
}

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    cout << max(a, b, c, d) << endl;

    return 0;
}
