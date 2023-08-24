// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

vector < ll > a;

ll dao ( ll x ) {
    ll k = log10 ( x );
    if ( k == 0 ) return x;
    ll a = x / 10, b = x % 10;
    ll s = b * pow (10, k) + a;
    return s;
}

ll binaryToDecimal(long binarynum)
{
    ll decimalnum = 0, temp = 0, remainder;
    while (binarynum != 0)
    {
        remainder = binarynum % 10;
        binarynum = binarynum / 10;
        decimalnum = decimalnum + remainder*pow(2,temp);
        temp++;
    }
    return decimalnum;
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, nhiphan = 0, i = 1, res, f; cin >> n;

    while ( n > 0 ) {
        nhiphan += ( n % 2 ) * i;
        i *= 10;
        n /= 2;
    }

    f = nhiphan;
    nhiphan = dao ( nhiphan );

    while ( nhiphan != f) {
        res = max ( res, nhiphan );
        nhiphan = dao ( nhiphan );

    }

    cout << binaryToDecimal ( res );
	return 0;
}



