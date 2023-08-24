// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;

ll h[MAXN], POW[MAXN];

string s;

ll mod = 31;


ll get_Hash( ll i, ll j ) {


    return ( h[j] - h[i - 1] * POW [ j - i + 1 ] + mod * mod ) % mod;


}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t;

	cin >> s;
	cin >> t;

	ll n = s.size();

	s = " " + s;

	h[0] = 0;
    for ( ll i = 1; i <= n; i++ ) {
        h[i] = ( h[i - 1] * 31 + (s[i] - 'a' + 1 ) ) % mod;
    }


    POW[0] = 1;
    for ( ll i = 1; i <= n; i++ ) {
        POW[i] = ( POW[i - 1] * 31 ) % mod;
    }

    ll l, r;

	while ( t-- ) {

         cin >> l >> r;


        if ( get_Hash ( l, r ) == get_Hash ( r, l ) ) cout << "YES" << endl;
        else cout << "NO" << endl;


	}

	return 0;
}






