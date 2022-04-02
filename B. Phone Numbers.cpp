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
    int t, mtx = 0, mpz = 0, mgl = 0;
    cin >> t;
    vector<pair<string, pair<pair<int, int>, int>>> v;
    for0(i, t)
    {
        int n, tx = 0, pz = 0, gl = 0;
        cin >> n;
        string s;
        cin >> s;
        for0(i, n)
        {
            string res;
            cin >> res;
            if (res[0] == res[1] && res[1] == res[3] && res[3] == res[4] && res[4] == res[6] && res[6] == res[7])
                tx++;
            else if (res[0] > res[1] && res[1] > res[3] && res[3] > res[4] && res[4] > res[6] && res[6] > res[7])
                pz++;
            else
                gl++;
        }
        v.pb(mp(s, mp(mp(tx, pz), gl)));
        mtx = max(mtx, tx);
        mpz = max(mpz, pz);
        mgl = max(mgl, gl);
    }
    // cout << mtx << " " << mpz << " " << mgl << endl;
    // for0(i, t)
    //         cout
    //     << v[i].fr << " " << v[i].se.fr.fr << " " << v[i].se.fr.se << " " << v[i].se.se << endl;
    cout << "If you want to call a taxi, you should call: ";
    vs rs;
    for0(i, t)
    {
        if (mtx == v[i].se.fr.fr)
            rs.pb(v[i].fr);
    }
    for0(i, rs.sz)
    {
        if (i != rs.sz - 1)
            cout << rs[i] << ", ";
        else
            cout << rs[i] << "." << endl;
    }
    rs.clear();
    cout<<"If you want to order a pizza, you should call: ";
    for0(i, t)
    {
        if (mpz == v[i].se.fr.se)
            rs.pb(v[i].fr);
    }
    for0(i, rs.sz)
    {
        if (i != rs.sz - 1)
            cout << rs[i] << ", ";
        else
            cout << rs[i] << "." << endl;
    }
    rs.clear();
    cout<<"If you want to go to a cafe with a wonderful girl, you should call: ";
    for0(i, t)
    {
        if (mgl == v[i].se.se)
            rs.pb(v[i].fr);
    }
    for0(i, rs.sz)
    {
        if (i != rs.sz - 1)
            cout << rs[i] << ", ";
        else
            cout << rs[i] << "." << endl;
    }
    return 0;
}