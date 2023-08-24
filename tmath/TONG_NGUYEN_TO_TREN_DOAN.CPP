// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll prime[MAXN];

void sieve () {
    memset ( prime, true, sizeof (prime) );
    prime[0] = prime[1] = false;

    for ( ll i = 2; i * i <= MAXN; i++ ) {
        if ( prime[i] ) {
            for ( ll j = i * i; j <= MAXN; j += i ) prime[j] = false;
        }
    }
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	sieve ();

	ll a, b, res = 0;

	cin >> a >> b;

	for ( ll i = a; i <= b; i++ ) {
        if ( prime[i] ) res += i;
	}

	cout << res;

	return 0;
}



