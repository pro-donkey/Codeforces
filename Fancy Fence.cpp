/*
 
    Author :: Bully Butcher
    This code if for the fancy fence 1100  rated 
 
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
    int t;
    cin >> t;
    while (t--)
    {
        int a;
        cin >> a;
        if (360 % (180 - a) == 0)
        {
            int ans = 360 / (180 - a);
            if ((ans > 2))
                cout << "YES\n";
            else
                cout << "NO\n";
        }
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
