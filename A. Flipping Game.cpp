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
vi v, res;
int flip(int pos)
{
    int ans = 0;
    if (pos >= res.sz) return 0;
    if (v[pos] != -1) return v[pos];
    for (int i = pos; i < res.sz; i++)
    {
        int cnt = 0;
        for (int j = pos; j <= i; j++)
        {
            if (res[j] == 1)
                res[j] = 0;
            else
                res[j] = 1;
        }
        for0(j, res.sz)
        {
            if (res[j] == 1)
                cnt++;
        }
        for (int j = pos; j <= i; j++)
        {
            if (res[j] == 1)
                res[j] = 0;
            else
                res[j] = 1;
        }
        cnt = max(cnt, flip(i + 1));
        ans = max(ans, cnt);
    }
    return v[pos] = ans;
}
signed main()
{
    Fastio;
    int n;
    cin >> n;
    v.resize(105, -1);
    for0(i, n)
    {
        int val;
        cin >> val;
        res.pb(val);
    }
    cout << flip(0) << endl;
    return 0;
}