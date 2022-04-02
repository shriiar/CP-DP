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
int vac(int i, int n, vector<int>& v, vector<vector<int>>& pr)
{
    if(v[i] == 0) pr[i][0] = 1;
    else if(v[i] == 1)
    {
        pr[i][0] = 1;
        pr[i][1] = 0;
    }
    else if(v[i] == 2)
    {
        pr[i][0] = 1;
        pr[i][2] = 0;
    }
    else if(v[i] == 3)
    {
        pr[i][0] = 1;
        pr[i][1] = 0;
        pr[i][2] = 0;
    }
    i += 1;
    for(; i < n; i++)
    {
        if(v[i] == 0) pr[i][0] = min(pr[i - 1][0], min(pr[i - 1][1], pr[i - 1][2])) + 1;
        if(v[i] == 1) 
        {
            pr[i][0] = min(pr[i - 1][0], min(pr[i - 1][1], pr[i - 1][2])) + 1;
            pr[i][1] = min(pr[i- 1][0], pr[i - 1][2]);
        }
        if(v[i] == 2)
        {
            pr[i][0] = min(pr[i - 1][0], min(pr[i - 1][1], pr[i - 1][2])) + 1;
            pr[i][2] = min(pr[i - 1][0], pr[i - 1][1]);
        }
        if(v[i] == 3)
        {
            pr[i][0] = min(pr[i - 1][0], min(pr[i - 1][1], pr[i - 1][2])) + 1;
            pr[i][1] = min(pr[i- 1][0], pr[i - 1][2]);
            pr[i][2] =  min(pr[i - 1][0], pr[i - 1][1]);
        }
    }
    return min(pr[n - 1][0], min(pr[n - 1][1], pr[n - 1][2]));
}
signed main()
{
    Fastio;
    int n;
    cin >> n;
    vi v;
    vvi pr(n, vi(3, 1e7));
    for0(i, n)
    {
        int val;
        cin >> val;
        v.pb(val);
    }
    cout << vac(0, n, v, pr) << endl;
    // for0(i, pr.sz)
    // {
    //     for0(j, 3) cout << pr[i][j] << " ";
    //     cout << endl; 
    // }
    return 0;
}