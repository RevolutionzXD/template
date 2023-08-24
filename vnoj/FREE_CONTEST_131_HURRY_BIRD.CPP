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



//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll t; cin >> t;
	while( t-- ) {
		
		ll n, m, x, y; cin >> n >> m >> x >> y;
		ll cmm = (( n & 1 ) != ( m & 1 ));
		--n; --m;
		if( n > m ) swap( n, m );
		
		ll res = min( x * n + x * m, x * ( m - n ) + y * n ); 
		if ( n >= 1 ) res = min( res, ( m - cmm ) * y + cmm * x );
		
		cout << res << endl;
		
	}

	return 0;
}


