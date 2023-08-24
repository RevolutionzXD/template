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

const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll x, ans;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> x;
	
	for ( ll i = 1; i * i <= x; ++i ) {
		for ( ll j = 2; j <= x; ++j ) {
			ll k = pow( i, j );
			if( k <= x ) ans = max( ans, k );
		}
	}
	
	cout << ans;

	return 0;
}


