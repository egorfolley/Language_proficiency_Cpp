#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
  int n, x = 0;
  cin >> n;

  vector <int> v;
  while (cin >> x)
    v.push_back(x);

  sort(v.begin(), v.end());

  for (auto i : v)
    cout << i << ' ';

  return 0;
}
