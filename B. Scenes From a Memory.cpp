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
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool f = 0;
        if(n == 1)
        {
            cout << 1 << endl << s << endl;
            continue;
        }
        for0(i, n)
        {
            if (s[i] == '1')
            {
                cout << 1 << endl << 1 << endl;
                f = 1;
                break;
            }
            else if (s[i] == '4')
            {
                cout << 1 << endl << 4 << endl;
                f = 1;
                break;
            }
            else if (s[i] == '6')
            {
                cout << 1 << endl << 6 << endl;
                f = 1;
                break;
            }
            else if (s[i] == '8')
            {
                cout << 1 << endl << 8 << endl;
                f = 1;
                break;
            }
            else if(s[i] == '9')
            {
                cout << 1 << endl << 9 << endl;
                f = 1;
                break;
            }
        }
        if(f) continue;
        for0(i, n - 1)
        {
            for(int j = i + 1; j < n; j++)
            {
                if(s[i] == '2')
                {
                    if(s[j] != '3' && s[j] != '9')
                    {
                        cout << 2 << endl << s[i] << s[j] << endl;
                        f = 1;
                        break;
                    }
                }
                else if(s[i] == '3')
                {
                    if(s[j] != '7')
                    {
                        cout << 2 << endl << s[i] << s[j] << endl;
                        f = 1;
                        break;
                    }
                }
                else if(s[i] == '4')
                {
                    if(s[j] != '3' && s[j] != '7')
                    {
                        cout << 2 << endl << s[i] << s[j] << endl;
                        f = 1;
                        break;
                    }
                }
                else if(s[i] == '5')
                {
                    if(s[j] != '3' && s[j] != '9')
                    {
                        cout << 2 << endl << s[i] << s[j] << endl;
                        f = 1;
                        break;
                    }
                }
                else if(s[i] == '6')
                {
                    if(s[j] != '7')
                    {
                        cout << 2 << endl << s[i] << s[j] << endl;
                        f = 1;
                        break;
                    }
                }
                else if(s[i] == '7')
                {
                    if(s[j] != '3' && s[j] != '9')
                    {
                        cout << 2 << endl << s[i] << s[j] << endl;
                        f = 1;
                        break;
                    }
                }
                else if(s[i] == '8')
                {
                    if(s[j] != '3' && s[j] != '9')
                    {
                        cout << 2 << endl << s[i] << s[j] << endl;
                        f = 1;
                        break;
                    }
                }
                else if(s[i] == '9')
                {
                    if(s[j] != '7')
                    {
                        cout << 2 << endl << s[i] << s[j] << endl;
                        f = 1;
                        break;
                    }
                }
            }
            if(f) break;
        }
        if(!f) cout << n << endl << s << endl;
    }
    return 0;
}