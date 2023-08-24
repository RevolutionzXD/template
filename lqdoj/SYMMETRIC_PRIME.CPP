// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll prime[MAXN], sym_prime[MAXN];
vector < ll > v;

void sieve () {

    memset( prime, true, sizeof(prime) );
    prime[0] = prime[1] = false;

    for ( ll i = 2; i * i <= MAXN; i++ )
        if (prime[i])
        for ( ll j = i * i; j <= MAXN; j += i ) prime[j] = false;
}

void convert() {

    for ( ll i = 1; i <= MAXN; i++ ) {
        if ( prime[i] ) v.push_back(i);
    }
}

void analyze () {

   for ( ll i = 1; i <= MAXN - 1; i++ ) {

        sym_prime[0] = false;

        if ( v[i] * 2 == v[i - 1] + v[i + 1]) sym_prime[i + 1] = true;
        else sym_prime[i] = false;

   }

}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	sieve();
	convert();
	analyze();

    ll t = 0; cin >> t;

    while ( t-- ) {

        ll n; cin >> n;

        if ( sym_prime[n] ) cout << "YES";
        else cout << "NO";
    }



	return 0;
}



