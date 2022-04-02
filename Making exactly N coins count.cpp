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
vi res;
vv v;
int coin(int n, int pos)
{
    if(v[pos][n] != -1) return v[pos][n];
    if(n < 0) return 0;
    if(n == 0) return 1;
    int ans1 = 0, ans2 = 0;
    if(res[pos] <= n)
        ans1 = coin(n - res[pos], pos);
    ans2 = coin(n, pos + 1);
    return v[pos][n] = ans1 +  ans2;
}
int mincoin(int n, int pos)
{
    if(v[pos][n] != -1) return v[pos][n];
    if(n < 0) return 1e5;
    if(n == 0) return 1;
    if(pos >= res.sz) return 1e5;
    int ans1 = 1e5, ans2 = 1e5;
    if(res[pos] <= n)
        ans1 = 1 + coin(n-res[pos], pos);
    ans2 = coin(n, pos + 1);
    return v[pos][n] = min(ans1, ans2);
}
signed main()
{
    Fastio;
    int n, m, pos = 0;
    cin >> n >> m;
    v.resize(n + 1);
    for0(i, 100)
    {
        for0(j, 100) v[i].pb(-1);   
    }
    for0(i, n)
    {
        int val;
        cin >> val;
        res.pb(val);
    }
    cout << coin(m, pos) << endl;
    cout<<mincoin(m, pos) << endl;
    return 0;
}