#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 25;

ll a[MAXN], b[MAXN];
ll n, dem;

bool prime ( ll x ) {
    for ( ll i = 2; i * i <= x; i++ ) {
        if ( x % i == 0 ) return false;
    }
    return ( x > 1 );

}


void Tong () {
    ll nhom0 = 0, nhom1 = 0;

    for ( ll i = 1; i <= n; i++ ) {
        if ( b[i] == 0 ) nhom0 += a[i];
        else  nhom1 += a[i];
    }

    dem += prime( abs( nhom0 - nhom1 ));
   // cout << prime(abs ( nhom0 - nhom1 )) << endl;
}

void Try ( ll i ) {
    for ( ll j = 0; j <= 1; j++ ) {
        b[i] = j;
        if ( i == n ) Tong();
        else Try ( i + 1 );
    }
}

int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;
    for ( ll i = 1; i <= n; i++ ) cin >> a[i];

    Try(1);

    cout << dem / 2;

    return 0;;

}
