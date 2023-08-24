// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

bool isPrime ( ll x ) {
    if ( x == 1 || x == 0 ) return false;
    for ( ll i = 2; i * i <= x; i++ ) if ( x % i == 0 ) return false;
    return true;
}

ll tongchuso( ll x ) {
    ll res = 0;

    while ( x > 0 ) {
        res += pow ( x  % 10, 2 );
        x /= 10;
    }

    return res;
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n; cin >> n;

    if ( isPrime ( tongchuso ( n ) ) ) cout << "YES";
    else cout << "NO";

	return 0;
}
