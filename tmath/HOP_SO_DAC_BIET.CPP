// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e3 + 5;


ll prime[MAXN];

void sieve () {
    memset ( prime, true, sizeof( prime ));
    prime[0] = prime[1] = false;

    for ( ll i = 2 ; i * i <= MAXN; i++ ) {
        if ( prime[i] ) {
            for ( ll j = i * i; j <= MAXN; j +=i ) prime[j] = false;
        }
    }
}

bool check ( ll x ) {
    for ( ll i = 2; i * i <= x; i++ ) {
        if ( prime[i] && x % i == 0 && prime[ x / i ]) {
            while ( x > 0 ) {
                x /= i;
            }
        }
    }

    if ( x == 0 ) return true;
    else return false;
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	sieve ();

    ll t, x; cin >> t;

    while ( t-- ) {
        cin >> x;
        if ( check (x) ) cout << "YES" << '\n';
        else cout << "NO" << '\n';
    }



	return 0;
}



