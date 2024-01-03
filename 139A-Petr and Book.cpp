

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

void solve()
{
    int n;
    cin >> n;
    vin v(7);
    for (auto &i : v)
        cin >> i;
    int indx = 0;
    int sum = 0;
    while (true)
    {
        if (indx > 6)
        {
            indx = 0;
        }
        sum += v[indx];
        if (sum >= n)
        {
            break;
        }
        indx++;
    }
    cout << (indx + 1) << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
}
