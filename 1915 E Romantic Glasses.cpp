/*
 
    Author :: Bully Butcher
 
 */
 
#include <bits/stdc++.h>
#define pb push_back
#define popb pop_back
#define print(a)          \
    for (auto i : a)      \
    {                     \
        cout << i << ' '; \
    }                     \
    cout << endl;
typedef long long ll;
using namespace std;
 
typedef vector<int> vin;
typedef vector<string> vst;
typedef vector<char> vch;
typedef vector<ll> vl;
typedef set<int> si;
typedef map<int, int> mii;
typedef unsigned long long ull;
#define f first
#define s second
#define MOD 1000000007
#define gcd(a, b) __gcd(a, b)
#define lcm(a, b) (a * (b / gcd(a, b)))
#define all(a) (a).begin(), (a).end()
 
void solve()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        vl arr(n);
      
        map<ll, ll> mp; 
 
        for (ll i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        ll sum = 0;
        mp[0] = 1; 
        ll val = 0;
        for (ll i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                sum += arr[i]; 
            else
                sum -= arr[i]; 
 
            if (mp[sum])        
                val = 28122023; 
            else
                mp[sum]++;
        }
        if (val)
            cout << "YES\n";
        else
            cout << "NO\n";
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}
