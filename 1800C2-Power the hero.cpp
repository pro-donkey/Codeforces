

/*

    Author :: Bully Butcher
    Powering the hero hard version using priority queue
    code works for the easy version as well because it is just constraint problem

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
        long n;
        cin >> n;
        vl v(n);
        priority_queue<ll> p;
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        ll ans = 0;
        for (int i = 0; i < v.size(); i++)
        {
            if ((v[i] == 0) && (p.size() > 0))
            {

                ans += p.top();
                p.pop();
            }
            else
                p.push(v[i]);
        }
        cout << ans << endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}
