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
#define vv vector <vector<int>>
#define seti set <int>
#define setl set <ll>
#define mapl map <ll, ll>
#define mapi map <int, int>
#define mults multiset<ll>
#define vs vector<string>

#define for0(i,n) for (ll i=0;i<n;i++)
#define for1(i,n) for (ll i=1;i<=n;i++)

#define all(v) (v).begin(), (v).end()
#define rall(v) (v).rbegin(), (v).rend()

#define Fastio ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
vi res;
string s, t;
int sum = 0;
void count(int pos)
{
    if(pos == t.sz)
    {
        res.pb(sum);
        return;
    }
    if(t[pos] != '?')
    {
        if(t[pos] == '+')
        {
            sum++;
            count(pos + 1);
            sum--;
        }
        if(t[pos] == '-')
        {
            sum--;
            count(pos + 1);
            sum++;
        }
    }
    else
    {
        sum++;
        t[pos] = '+';
        count(pos + 1);
        sum -= 2;
        t[pos] = '-';
        count(pos + 1);
        t[pos] = '?';
        sum++;
    }
}
signed main()
{
    Fastio;
    int ans = 0, cnt = 0;
    cin >> s >> t;
    for0(i, t.sz)
    {
        if(s[i] == '+') ans++;
        else ans--;
    }
    count(0);
    for(auto i: res)
        if(ans == i) cnt++;
    cout << setprecision(12) << fixed << double(cnt) / double(res.sz) << endl;
    return 0;
}