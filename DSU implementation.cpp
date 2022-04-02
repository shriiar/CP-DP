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
vector <int> p, _sz;
int findp(int n)
{
    if(p[n] == n) return n;
    return p[n] = findp(p[n]);
}
void dsu(int u, int v)
{
    int pu = findp(u);
    int pv = findp(v);
    if(pu == pv) return;
    if(_sz[pv] > _sz[pu]) swap(pu, pv);
    _sz[pu] += _sz[pv];
    p[pv] = pu;
}
signed main()
{
    Fastio;
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;
        p.resize(n + 1, 0);
        _sz.resize(n + 1, 0);
        for(int i = 0; i <= n; i++) 
        {
            p[i] = i;
            _sz[i] = 1;
        }
        for(int i = 0; i < m; i++)
        {
            int a, b;
            cin >> a >> b;
            dsu(a, b);
        }
        set <int> s;
        for(int i = 1; i <= n; i++) s.insert(findp(i));
        cout << s.size() << endl;
    }
    return 0;
}