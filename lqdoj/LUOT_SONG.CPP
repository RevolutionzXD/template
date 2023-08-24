// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;




int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, res = 0, money = 0; cin >> n;

    vector <ll> a (n);
    vector <ll> L ( n, 1 );
    vector <ll> m (n);


    for ( ll i = 1; i <= n; i++ ) cin >> a[i];


    for ( ll i = 1; i <= n; i++ ) {
        for ( ll j = 1; j < i; j++ ) {
            if ( m[i] + m[j] >= 0 ) {
                 L[i] = max ( L[i], L[j + 1] );
                 m[i] = m[j] + m[i];
            }
        }
    }

    cout << *max_element( L.begin(), L.end() );

	return 0;
}



