#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9 + 7;
ll modPow(ll base, ll exp, ll mod)
{
    ll result = 1;
    base %= mod;
    while (exp > 0)
    {
        if (exp & 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp >>= 1;
    }
    return result;
}

int main()
{
    ll n;
    cin >> n;

    ll evenCount = (n + 1) / 2;
    ll oddCount = n / 2;

    ll ans = (modPow(5, evenCount, MOD) * modPow(4, oddCount, MOD)) % MOD;

    cout << ans << endl;
    return 0;
}
