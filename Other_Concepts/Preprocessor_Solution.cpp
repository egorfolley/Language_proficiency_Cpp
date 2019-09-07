#include <bits/stdc++.h>

#define INF (unsigned) ! ( (int) 0 )
#define FUNCTION(name,operator) inline void name(int &current, int candidate) { !(current operator candidate) ? current = candidate : false; }
#define io(v) std::cin >> v
#define toStr(str) #str
#define foreach(v, i) for ( int i = 0; i < v.size(); ++i )

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main()
{
	uint16_t n;
  std::cin >> n;

  std::vector<int> v(n);

  foreach(v, i) { io(v)[i]; }

	uint mn = INF;
	uint mx = -INF;

  foreach(v, i)
  {
		minimum(mn, v[i]);
		maximum(mx, v[i]);
	}

  int ans = mx - mn;

  std::cout << toStr( Result = ) << ' ' << ans;

  return 0;
}
