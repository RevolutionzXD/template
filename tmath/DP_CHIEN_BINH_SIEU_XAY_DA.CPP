// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;


ll a[MAXN], pre1[MAXN], pre2[MAXN], pre3[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);

	ll n, t; cin >> n >> t;
	for ( ll i = 1; i <= n; i++ ) cin >> a[i];

	pre1[0] = pre2[0] = pre3[0] = 0;

    if ( a[1] == 1 ) pre1[1] = 1;
    if ( a[1] == 2 ) pre2[1] = 1;
    if ( a[1] == 3 ) pre3[1] = 1;

	for ( ll i = 2; i <= n; i++ ) {

        if ( a[i] == 1 ) {
            pre1[i] = pre1[ i - 1 ] + 1;
            pre2[i] = pre2[ i - 1 ];
            pre3[i] = pre3[ i - 1 ];
        }


        if ( a[i] == 2 ) {
            pre2[i] = pre2[ i - 1 ] + 1;
            pre1[i] = pre1[ i - 1 ];
            pre3[i] = pre3[ i - 1 ];
        }


        if ( a[i] == 3 ) {
            pre3[i] = pre3[ i - 1 ] + 1;
            pre1[i] = pre1[ i - 1 ];
            pre2[i] = pre2[ i - 1 ];
        }



	}

    while ( t-- ) {
        ll l, r; cin >> l >> r;
        cout << pre1[r] - pre1[ l - 1 ] << " " << pre2[r] - pre2[ l - 1 ] << " " << pre3[r] - pre3[ l - 1 ] << endl;
	}



	return 0;
}




