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
    int n, k, l, c, d, p, nl, np, td = 0, cnt = 0;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    td = k * l;
    c *= d;
    while (1)
    {
        if (td - nl >= 0)
            td -= nl;
        else
            break;
        if (c - 1 >= 0)
            c -= 1;
        else
            break;
        if (p - np >= 0)
            p -= np;
        else
            break;
        cnt++;
    }
    cout << cnt / n << endl;
    return 0;
}