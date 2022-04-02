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
signed main()
{
    Fastio;
    int d, s;
    cin >> d >> s;
    vi vmn(d, 0), vmx(d, 0);
    if(s == 0 && d == 1) cout<<"0 0"<<endl;
    else if(s == 0 || s > d * 9) cout<<"-1 -1"<<endl;
    else
    {
        int mn, mx;
        mn = mx = s;
        vmn[0] = 1;
        mn--;
        for(int i = d - 1; i >= 0; i--)
        {
            if(mn == 0) break;
            if(mn >= 9)
            {
                vmn[i] += 9;
                mn -= 9;
            }
            else
            {
                vmn[i] += mn;
                mn = 0;
            }
        }
        for(int i = 0; i < d; i++)
        {
            if(mx == 0) break;
            if(mx >= 9)
            {
                vmx[i] += 9;
                mx -= 9;
            }
            else
            {
                vmx[i] += mx;
                mx = 0;
            }
        }
        for(auto i: vmn) cout<<i;
        cout<<" ";
        for(auto i: vmx) cout<<i;
        cout<<endl;
    }
    return 0;
}