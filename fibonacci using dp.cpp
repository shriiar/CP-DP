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

// We will use DP when it has optimal sub structure in recursion and has overlap optimal sub structure in top-bottom approach
// If the first condition is true then we will try using bottom-top approach finding an equation

// printing fibonacci using DP
vi v, res;
int fib(int n) // using top-bottom apprpach
{
    if (v[n] != -1)
        return v[n];
    if (n <= 1)
        return n;
    v[n] = fib(n - 1) + fib(n - 2);
    res.pb(v[n]);
    return v[n];
}
void ffib(int n) // using bottom-top approach
{
    for (int i = 2; i <= n; i++)
    {
        v[i] = v[i - 1] + v[i - 2];
        res.pb(v[i]);
    }
}

// printing factorial using DP
int fact(int n) // using top-bottom apprpach
{
    if (v[n] != -1)
        return v[n];
    if (n == 1)
        return n;
    v[n] = n * fact(n - 1);
    res.pb(v[n]);
    return v[n];
}
void ffact(int n) // using bottom-top approach
{
    for (int i = 2; i <= n; i++)
    {
        v[i] = i * v[i - 1];
        res.pb(v[i]);
    }
}

// printing nCr using DP
vv vr;
int ncr(int n, int r) // using top-bottom approach
{
    if (vr[n][r] != -1)
        return vr[n][r];
    if (r > n)
        return 0;
    if (r == 0)
        return 1;
    if (r == 1)
        return n;
    if (n == r)
        return 1;
    vr[n][r] = ncr(n - 1, r) + ncr(n - 1, r - 1);
    return vr[n][r];
}
signed main()
{
    Fastio;
    int n, r;
    cin >> n >> r;
    v.resize(n + 1, -1);
    vr.resize(100);
}