// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 110;


ll a[MAXN][MAXN], d[MAXN][MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);

    ll n; cin >> n;
    for ( ll i = 1; i <= n; i++ )
        for ( ll j = 1; j <= i; j++ ) cin >> a[i][j];

    d[1][1] = a[1][1];

    for ( ll i = 2; i <= n; i++ )
        for ( ll j = 1; j <= i; j++ ) d[i][j] = max ( d[ i - 1 ][j], d[ i - 1 ][ j - 1 ] ) + a[i][j];

	ll res = 0;
	for ( ll i = 1; i <= n; i++ ) res = max ( res, d[n][i] );
	cout << res;



	return 0;
}



