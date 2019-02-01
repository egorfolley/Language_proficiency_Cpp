#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, k = 0;
  cin >> n;
  vector <int> v;
  for (int i = 0; i < n; i++)
  {
    cin >> k;
    v.push_back(k);
  }

  int x, a = 0, b = 0;
  cin >> x;
  cin >> a >> b;

  v.erase(v.begin() + x - 1);
  v.erase(v.begin() + a - 1, v.begin() + b - 1);

  cout << v.size() << endl;
  for (auto i : v)
    cout << i << ' ';

  return 0;
}
