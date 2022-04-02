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
#define vv vector<vector<ll>>
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
    ll n, m;
    cin >> n >> m;
    vv res(n, vl(2, 0)), v(n + 1, vl(m + 1, 0));
    for0(i, n) cin >> res[i][0] >> res[i][1];
    for1(i, n)
    {
        for1(j, m)
        {
            if (res[i - 1][0] > j) v[i][j] = v[i - 1][j];
            else v[i][j] = max(v[i - 1][j], v[i - 1][j - res[i - 1][0]] + res[i - 1][1]);
        }
    }
    cout << v[n][m] << endl;
    return 0;
}
