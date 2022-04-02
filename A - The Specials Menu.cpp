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

#define vi vector <int>
#define vb vector <bool>
#define vl vector <ll>
#define vpi vector <pair<int, int>>
#define vpl vector <pair<ll, ll>>
#define vplb vector <pair<ll, bool>>
#define vpib vector <pair<int, bool>>
#define vvi vector <vector<int>>
#define vvl vector <vector<ll>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)
#define __lcm(a, b) ((a * b) / __gcd(a, b))

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
long long dp[100][100];
string s;
long long pal(int i, int j)
{
    if(i > j) return 0;
    if(j < i) return 0;
    if(i == j) return 1;
    if(dp[i][j] != -1) return dp[i][j];
    if(s[i] == s[j]) return dp[i][j] = 1 + pal(i + 1, j) + pal(i, j - 1);
    else return dp[i][j] = pal(i + 1, j) + pal(i, j - 1) - pal(i + 1, j - 1);
}
signed main()
{
    Fastio;
    int t;
    cin >> t;
    for1(z, t)
    {
        cout << "Case " << z << ": ";
        s.clear();
        cin >> s;
        memset(dp, -1, sizeof(dp));
        cout << pal(0, s.sz - 1) << endl;
    }
    return 0;
}