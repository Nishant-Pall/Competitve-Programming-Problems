#include <bits/stdc++.h>
using namespace std;

#define for0(i, n) for (int i = 0; i < (int)(n); ++i)            // 0 based indexing
#define for1(i, n) for (int i = 1; i <= (int)(n); ++i)           // 1 based indexing
#define forc(i, l, r) for (int i = (int)(l); i <= (int)(r); ++i) // closed interver from l to r r inclusive
#define forr0(i, n) for (int i = (int)(n)-1; i >= 0; --i)        // reverse 0 based.
#define forr1(i, n) for (int i = (int)(n); i >= 1; --i)          // reverse 1 based

#define pb push_back
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
    ll n;
    cin >> n;
    ll num;
    vll v;
    for (ll i = 0; i < n; i++)
    {
        cin >> num;
        v.emplace_back(num);
    }
    sort(all(v));
    ll cost;
    vll c;
    ll m = *max_element(all(v));
    for (ll k = 2; k < m; k++)
    {
        cost = 0;
        for (ll i = 0; i < (ll)v.size(); i++)
        {
            if (v[i] != pow(k, i))
                cost += abs(pow(k, i) - v[i]);
        }
        c.emplace_back(cost);
    }
    cout << *min_element(all(c));
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    // int tc;
    // cin >> tc;
    // for (int t = 1; t <= tc; t++)
    // {
    //cout << "Case #" << t  << ": ";
    solve();
    // }
}
