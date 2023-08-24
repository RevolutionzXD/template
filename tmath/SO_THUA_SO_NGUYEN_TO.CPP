// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll prime[MAXN];


void sieve() {

    memset( prime, true, sizeof(prime) );

    prime[0] = prime[1] = false;

    for ( ll i = 2; i * i <= MAXN; i++ ) {
        if (prime[i]) for ( ll j = i * i; j <= MAXN; j += i ) prime[j] = false;
    }
}

ll analyze ( ll x ){

    ll i = 2, res = 0;

    while ( i < x ) {

        if ( prime[i] && x % i == 0 ) {
            x /= i;
            res++;
        }

        i++;
    }

    return res;

}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	sieve();

	ll n; cin >> n;

	cout << analyze (n);

	return 0;
}



