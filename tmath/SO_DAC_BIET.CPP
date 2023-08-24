// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;


ll tong ( ll x ) {

    ll res = 0;

    while ( x > 0 ) {
        res += x % 10;
        x /= 10;
    }

    return res;
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll t; cin >> t;

	while ( t-- ) {
        ll n; cin >> n;

        if ( n % tong (n) == 0 ) cout << 1 << endl;
        else cout << 0 << endl;
	}


	return 0;
}



