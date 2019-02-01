#include <iostream>
#include <set>

using namespace std;

int main()
{
    int q, y = 0, x = 0;
    cin >> q;
    set <int> s;

    for (int i = 0; i < q; i++)
    {
      cin >> y >> x;
      switch (y)
      {
        case 1:
          s.insert(x);
          break;
        case 2:
          s.erase(x);
          break;
        case 3:
          cout << (s.find(x) != s.end() ? "Yes" : "No") << endl;
          break;
        }
      }

    return 0;
}
