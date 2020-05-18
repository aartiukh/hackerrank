#include <limits>

#define toStr(value) #value
#define io(value) cin >> value
#define INF std::numeric_limits<int>::max()
#define FUNCTION(minmax, s)                                                                                            \
    void minmax(int& a, int& b) { a = (a)s(b) ? a : b; }
#define foreach(a, i) for (size_t i = 0u; i < a.size(); ++i)

#include <iostream>
#include <vector>
using namespace std;

#if !defined toStr || !defined io || !defined FUNCTION || !defined INF
#error Missing preprocessor definitions
#endif

FUNCTION(minimum, <)
FUNCTION(maximum, >)

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    foreach (v, i)
    {
        io(v)[i];
    }
    int mn = INF;
    int mx = -INF;
    foreach (v, i)
    {
        minimum(mn, v[i]);
        maximum(mx, v[i]);
    }
    int ans = mx - mn;
    cout << toStr(Result =) << ' ' << ans;
    return 0;
}
