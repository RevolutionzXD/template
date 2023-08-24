// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1000;

ll a[MAXN][MAXN], d[MAXN][MAXN];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);

	ll m, n; cin >> m >> n;

	for ( ll i = 0; i <= n; i++ ) d[i][0] = -1e9;

	for ( ll i = 0; i <= n; i++ ) d[0][i] = -1e9;



    for ( ll i = 1; i <= m; i++ )
        for ( ll j = 1; j <= n; j++ ) {
            cin >> a[i][j];
            d[1][1] = a[1][1];
            d[i][j] = max ( d[ i - 1 ][j], d[i][ j - 1 ] ) + a[i][j];
        }

    cout << d[m][n];



	return 0;
}
