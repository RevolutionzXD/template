#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e8 + 5;

ll prime[MAXN];

void sieve () {
    memset ( prime, true, sizeof(prime) );
    prime[0] = prime[1] = false;

    for ( ll i = 2; i * i <= MAXN; i++ ) {
        for ( ll j = i * i; j <= MAXN; j++ ) prime[j] = false;
    }
}



int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, res = 1, tich = 0, i = 1; cin >> n;

    sieve ();

    while ( tich <= n ) {

        if ( prime [i] ) {
            tich = pow ( prime[i], 8);
            res++;
        }

        i++;

    }

    cout << res;


    return 0;

}
// loi tran chua sua duoc
