#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int INF = 0x3f3f3f3f;

bool isPrime(ll n)
{
    if (n < 2 || n == 4) return false;
    if (n == 2 || n == 3 || n == 5) return true;
    if (n % 2 == 0 || n % 3 == 0 || n % 5 == 0) return false;

    for (int x = 5; 1LL * x * x <= n; x += 6)
        if (n % x == 0 || n % (x + 2) == 0)
            return false;
            
    return true;
}

ll pw(ll x, ll n)
{
    ll res = 1;
    for (; n > 0; n >>= 1)
    {
        if (n & 1)
        {
            if (res <= LINF / x)
                res *= x;
            else 
                res = +LINF;
        }

        if (x <= LINF / x)
            x *= x;
        else 
            x = +LINF;
    }

    return res;
}

int main()
{
    ll n;
    cin >> n;

    for (int q = 2; q <= 60; ++q)
    {
        ll p = pow(n, double(1.0) / q);
        while (pw(p, q) < n) ++p;
        while (pw(p, q) > n) --p;
        if (pw(p, q) == n)
        {
            if (isPrime(p))
            {
                cout << p << " " << q;
                return 0;
            }
        }
    }

    cout << 0;
    return 0;
}