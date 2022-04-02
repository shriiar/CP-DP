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
    int t;
    cin >> t;
    for1(z, t)
    {
        cout << "Case " << z << ": ";
        int n, cnt = 1, tot = 0, sum = 0, res = 0;
        cin >> n;
        vector<vector<pair<pair<string, string>, int>>> ps(55);
        vector<vector<pair<int, int>>> p(55);
        vs vp;
        map<string, int> mapp;
        for0(i, n)
        {
            string s, t;
            int v;
            cin >> s >> t >> v;
            ps[i].pb(mp(mp(s, t), v));
            vp.pb(s);
            vp.pb(t);
        }
        sort(all(vp));
        vp.erase(unique(all(vp)), vp.end());
        tot = vp.sz;
        for0(i, vp.sz)
        {
            mapp[vp[i]] = cnt;
            cnt++;
        }
        for0(i, n)
        {
            string s = ps[i][0].fr.fr, t = ps[i][0].fr.se;
            int w = ps[i][0].se;
            int a = mapp[s], b = mapp[t];
            p[a].pb({w, b});
            p[b].pb({w, a});       
        }
        vi vd(55, -1);
        priority_queue<pair<int, int>, vpi, greater<pair<int, int>>> q;
        q.push({0, 1});
        while(!q.empty())
        {
            int pid = q.top().se, pw = q.top().fr;
            q.pop();
            if(vd[pid] == 1) continue;
            sum += pw;
            vd[pid] = 1;
            res++;
            for0(i, p[pid].sz)
            {
                if(vd[p[pid][i].se] == 1) continue;
                q.push({p[pid][i].fr, p[pid][i].se});
            }
        }
        if(res == tot) cout << sum << endl;
        else cout <<"Impossible" << endl;
    }
    return 0;
}