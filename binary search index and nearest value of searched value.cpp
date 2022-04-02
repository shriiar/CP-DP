#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define li long long int;
#define pb push_back
#define pf push_front
#define vi vector<int>
#define vb vector<bool>
#define vl vector<long long>
#define mp make_pair
#define vpi vector<pair<int, int>>
#define vpl vector<pair<long long, long long>>
#define vplb vector<pair<long long, bool>>
#define vpib vector<pair<int, bool>>
#define vv vector<vector<int>>
#define iton (ll i = 0; i < n; i++)
#define seti set<int>
#define setl set<long long>
#define mapl map<long long, long long>
#define mapi map<int, int>
#define sz size()
#define Fastio                   \
    ios::sync_with_stdio(false); \
    cin.tie(0);                  \
    cout.tie(0);
ll search(vector<ll> &v, ll n, ll x)
{
    int low = 0, high = n - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        if (x == v[mid])
            return mid;
        else if (x < v[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }
    return -1;
}
ll lower(vector<ll> &v, ll start, ll end, ll val)
{
    if (start == end)
        return v[start] <= val ? start : -1;
    int mid = start + (end - start) / 2;
    if (val < v[mid])
        return lower(v, start, mid, val);
    int ret = lower(v, mid + 1, end, val);
    return ret == -1 ? mid : ret;
}
int main()
{
    Fastio;
}