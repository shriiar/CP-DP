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
    string s;
    cin >> s;
    size_t f1, f2, f3, f4;
    f1 = s.find("AB");
    f2 = s.find("BA");
    f3 = s.rfind("AB");
    f4 = s.rfind("BA");
    if(f1 == string::npos || f2 == string::npos)
    {
        cout<<"NO"<<endl;
        return 0;
    }
    int x1 = f1, x2 = f2, x3 = f3, x4 = f4;
    if(abs(x1-x4) > 1 || abs(x2-x3) > 1)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    return 0;
}