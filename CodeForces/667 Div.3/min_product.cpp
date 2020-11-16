#include <bits/stdc++.h>
using namespace std;

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)            // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)           // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n)-1; i >= 0; --i)        // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i)          // reverse 1 based

#define pb push_back
#define eb emplace_back
#define fi first
#define se second

#define all(x) (x).begin(), (x).end()  //Forward traversal
#define rall(x) (x).rbegin, (x).rend() //reverse traversal

typedef vector<int> vi;
typedef vector<vi> vvi;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<vll> vvll;
typedef double ld;

void solve()
{
    unsigned int a, b, x, y, n;
    cin >> a >> b >> x >> y >> n;
    vector<long> v;
    if ((a - n) >= x)
    {
        v.eb((a - n) * b);
    }
    if ((b - n) >= y)
    {
        v.eb((b - n) * a);
    }
    for (unsigned int i = n; i > 0; i--)
    {
        if (a - i >= x)
        {
            v.eb((a - i) * (b));
        }
        if (b - i >= y)
        {
            v.eb((b - i) * (a));
        }
        if (a - i >= x && b - n + i >= y)
        {
            v.eb((a - i) * (b - n + i));
        }
    }
    cout << *min_element(all(v)) << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int tc;
    cin >> tc;
    for (int t = 1; t <= tc; t++)
    {
        //cout << "Case #" << t  << ": ";
        solve();
    }
}
