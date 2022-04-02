#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int
#define ul unsigned long long int
#define pb push_back
#define pf push_front
#define mp make_pair
#define sz size()
#define mod 1000000007
#define fr first
#define se second

#define vi vector<int>
#define vb vector<bool>
#define vl vector<ll>
#define vpi vector<pair<int, int>>
#define vpl vector<pair<ll, ll>>
#define vplb vector<pair<ll, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define seti set<int>
#define setl set<ll>
#define mapl map<ll, ll>
#define mapi map<int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i, n) for (ll i = 0; i < n; i++)
#define for1(i, n) for (ll i = 1; i <= n; i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
signed main()
{
    Fastio;
    int n, m, cnt = 0;
    cin >> n >> m;
    vi v(1e5 + 3, 0), ans(1e5 + 3, 0), res;
    res.pb(0);
    for0(i, n)
    {
        int val;
        cin >> val;
        if (v[val] == 0) cnt++;
        v[val]++;
        res.pb(val);
    }
    for1(i, n)
    {
        if (i == 1)
        {
            ans[i] = cnt;
            continue;
        }
        v[res[i - 1]] -= 1;
        if (v[res[i - 1]] == 0) cnt--;
        ans[i] = cnt;
    }
    for0(i, m)
    {
        int indx;
        cin >> indx;
        cout << ans[indx] << endl;
    }
    return 0;
}