#include <iostream>

using namespace std;

int main()
{
    int n, i = 0;
    cin >> n;

    int *a = new int[n];
    while (cin >> a[i++] && (i < n));

  	while (cout << a[--n] << ' ' && n);

    delete [] a;
    return 0;
}
