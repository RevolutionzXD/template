// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define ull unsigned long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll m, n, k, res = -inf;
ll a[MAXN], dp[MAXN];

//-----------------------//




signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> m >> n >> k;
	for ( ll i = 1; i <= m; ++i ) cin >> a[i];
	
	sort( a + 1, a + m + 1 );
	
	dp[0] = 0; dp[1] = a[1];
	for ( ll i = 2; i <= m; ++i ) dp[i] = dp[ i - 1 ] + a[i];
	
	for ( ll i = m; i >= n; --i ) {
		
		if ( a[i] - a[ i - n + 1 ] <= k ) {
			
			res = max( res, dp[i] - dp[ i - n ] );
			
		}
		
	}
	
	cout << ( ( res != -inf ) ? res : -2 ) ;

	return 0;
	
}


