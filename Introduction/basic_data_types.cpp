#include <iostream>

using namespace std;

int main()
{
    int a; long b; char c; float f; double d;
    cin >> a >> b >> c >> f >> d;

    cout << a << endl
         << b << endl
         << c << endl;
    cout.precision(3);
    cout << fixed << f << endl;
    cout.precision(9);
    cout << fixed << d << endl;

    return 0;
}
