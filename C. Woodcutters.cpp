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
vector<pair<pair<ll, bool>, pair<ll, bool>>> pr;
vpl v;
ll n;
ll cutters(ll i)
{
    pr[i].fr.fr = 1, pr[i].fr.se = 1;
    if(v[i].fr + v[i].se < v[i + 1].fr)
    {
        pr[i].se.fr = 1;
        pr[i].se.se = 1;
    }
    i += 1;
    for(; i < n; i++)
    {
        ll x = pr[i - 1].fr.fr, y = pr[i - 1].se.fr;
        bool f = 0, g = 0;
        if(v[i].fr - v[i].se > v[i - 1].fr)
        {
            x += 1;
            f = 1;
        }
        if(pr[i - 1].se.se == 1 && v[i - 1].fr + v[i - 1].se < v[i].fr - v[i].se)
        {
            y += 1;
            g = 1;
        }
        if(x >= y)
        {
            pr[i].fr.fr = x;
            pr[i].fr.se = f;
        }
        else
        {
            pr[i].fr.fr = y;
            pr[i].fr.se = g;
        }
        if(i != n - 1)
        {
            if(v[i].fr + v[i].se < v[i + 1].fr) 
            {
                pr[i].se.fr = max(pr[i - 1].fr.fr, pr[i - 1].se.fr) + 1;
                pr[i].se.se = 1;
            }
            else pr[i].se.fr = max(pr[i - 1].fr.fr, pr[i - 1].se.fr);
        }
        else 
        {
            pr[i].se.fr = max(pr[i - 1].fr.fr, pr[i - 1].se.fr) + 1;
            pr[i].se.se = 1;
        }
    }
    return max(pr[n - 1].fr.fr, pr[n - 1].se.fr);
}
signed main()
{
    Fastio;
    cin >> n;
    for0(i, n)
    {
        ll a, b;
        cin >> a >> b;
        v.pb(mp(a, b));
    }
    for0(i, n) pr.pb(mp(mp(0, 0), mp(0, 0)));
    cout << cutters(0) << endl;
    // for0(i, n) cout << pr[i].fr.fr << " " << pr[i].fr.se << " " << pr[i].se.fr << " " << pr[i].se.se << endl;
    // Alhamdulliah 
    return 0;
}