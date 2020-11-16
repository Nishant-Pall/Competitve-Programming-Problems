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

int sumDigits(ll n)
{
    int ans = 0;
    while (n)
    {
        ans += n % 10;
        n = n / 10;
    }
    return ans;
}

void solve()
{
    ll n;
    int s;
    cin >> n >> s;
    if (n <= s)
    {
        cout << 0 << endl;
        return;
    }
    ll count = 0;
    int sum = sumDigits(n);
    while (sum > s)
    {
        sum = sumDigits(n);
        n++;
        count++;
    }
    cout << count - 1 << endl;
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
