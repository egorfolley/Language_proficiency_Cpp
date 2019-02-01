#include <iostream>
#include <vector>

using namespace std;

int main()
{
  int n, x = 0;
  cin >> n;

  vector <int> v;
  for (int i = 0; i < n; i++)
  {
    cin >> x;
    v.push_back(x);
  }

  int q, y = 0;
  cin >> q;
  for (int i = 0; i < q; i++)
  {
    cin >> y;

    vector <int>::iterator low = lower_bound(v.begin(), v.end(), y);
    if (v[low - v.begin()] == y)
      cout << "Yes " << (low - v.begin() + 1) << endl;
    else
      cout << "No " << (low - v.begin() + 1) << endl;
  }

  return 0;
}
