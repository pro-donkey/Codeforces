

/*

    Author :: Programming  Donkey  :)
I am here to improve my coding skills i give up easy plz help me i get stuck in a problem very easy plz help me plz help me
I think i am going to be poor plz help mee i have very bad financial condition i cant code plz help me

 */

#include <bits/stdc++.h>
#define pb push_back
#define popb pop_back
#define mp make_pair
#define ff first
#define ss second
#define PI 3.141592653589793238462
#define set_bits __builtin_popcountll
#define print(a)          \
    for (auto i : a)      \
    {                     \
        cout << i << ' '; \
    }                     \
    cout << endl;
#define eb emplace_back
#define mt make_tuple
#define MOD 1000000007
#define MOD1 998244353

typedef long long ll;
typedef long long int llt;
using namespace std;

typedef vector<int> vin;
typedef vector<string> vst;
typedef vector<char> vch;

bool ans(llt n, llt m)
{
    if (n == m)
        return true;
    else if (n % 3 != 0)
        return false;

    return (ans(n / 3, m) || ans(2 * (n / 3), m));
}

void solve()
{
    int t;
    cin >> t;
    while (t--)
    {
        llt n, m;
        cin >> n >> m;
        if (ans(n, m))
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
