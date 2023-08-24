// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e2 + 5;


bool nt ( ll x ) {
    if ( x == 0 || x == 1 ) return false;
    for ( ll i = 2; i * i <= x; i++ ) {
        if ( x % i == 0 ) return false;
    }
    return true;
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t, x; cin >> t;

    while ( t-- ) {
        cin >> x;
        if ( nt(x) ) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }

	return 0;
}

