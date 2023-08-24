// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>

#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

const ll MAXN = 10;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN][MAXN];
ll x, y;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	for ( ll i = 1; i <= 5; ++i ){
		for ( ll j = 1; j <= 5; ++j ) {
			cin >> a[i][j];
			if ( a[i][j] == 1 ) {
				x = i;
				y = j;
			}
		}
	}
	
	cout << abs( x - 3 ) + abs( y - 3 );
	

	return 0;
}


