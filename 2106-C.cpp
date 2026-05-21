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
        int n, k;
        cin >> n >> k;
        vin a(n), b(n);
        int mx = -1e9;
        int mn = 1e9;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mx = max(mx, a[i]);
            mn = min(mn, a[i]);
        }

        set<int> st;
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
            if (b[i] != -1)
            {
                st.insert(a[i] + b[i]);
            }
        }

        if (st.size() > 1)
        {
            cout << "0\n";
        }
        else if (st.size() == 1)
        {
            bool flag = true;
            int val = *st.begin();
            for (int i = 0; i < n; i++)
            {
                if (b[i] == -1)
                {
                    int c = val - a[i];
                    if (c > k || c < 0)
                    {
                        flag = false;
                        break;
                    }
                }
            }
            cout << (flag ? "1\n" : "0\n");
        }
        else
        {
            cout << k + mn - mx + 1 << "\n";
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}
