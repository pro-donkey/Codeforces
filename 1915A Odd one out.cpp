 
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
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b)
            cout << c << endl;
        else if (b == c)
            cout << a << endl;
        else
            cout << b << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}
