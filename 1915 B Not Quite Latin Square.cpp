 
 
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
        int a = 0, b = 0, c = 0;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                char ans;
                cin >> ans;
                if (ans == 'A')
                {
                    a++;
                }
                else if (ans == 'B')
                {
                    b++;
                }
                else if (ans == 'C')
                {
                    c++;
                }
            }
        }
        if (a == b)
            cout << "C" << endl;
        else if (b == c)
            cout << "A" << endl;
        else
            cout << "B" << endl;
    }
}
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}
