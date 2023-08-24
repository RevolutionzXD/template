// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll h[MAXN], POW[MAXN];

string s;

ll mod;


ll get_Hash( ll i, ll j ) {


    return ( h[j] - h[i - 1] * POW [ j - i + 1 ] + mod * mod ) % mod;


}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll t, l, r;

	cin >> mod;
	cin >> s;
	cin >> t;

	s = " " + s;

	h[0] = 0;
    for ( ll i = 1; i <= s.size(); i++ ) {
        h[i] = ( h[i - 1] * 31 + (s[i] - 'a' + 1 ) ) % mod;
    }


    POW[0] = 1;
    for ( ll i = 1; i <= s.size(); i++ ) {
        POW[i] = ( POW[i - 1] * 31 ) % mod;
    }


	while ( t-- ) {

         cin >> l >> r;


        cout << get_Hash ( l, r ) << endl;


	}

	return 0;
}




