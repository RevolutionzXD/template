// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const ll MAXN = 1e5 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN];
ll dp1[MAXN], dp2[MAXN], dp3[MAXN];
ll n, q;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	dp1[0] = dp2[0] = dp3[0] = 0;
	
	cin >> n >> q; 
	for ( ll i = 1; i <= n; ++i ) {
		
		cin >> a[i];
		
		ll x, y, z;
		if ( a[i] == 1 ) {
			x = 1, y = 0, z = 0;
		}
		
		if ( a[i] == 2 ) {
			x = 0, y = 1, z = 0;
		}
		
		if ( a[i] == 3 ) {
			x = 0, y = 0, z = 1;
		}
		
		
		dp1[i] = dp1[ i - 1 ] + x;
		dp2[i] = dp2[ i - 1 ] + y;
		dp3[i] = dp3[ i - 1 ] + z;
		
		
	}
	

	
	while( q-- ) {
		
		ll a, b; cin >> a >> b;
		cout << dp1[b] - dp1[ a - 1 ] << " " << dp2[b] - dp2[ a - 1 ] << " " << dp3[b] - dp3[ a - 1 ] << endl;
		
	}

	return 0;
}


