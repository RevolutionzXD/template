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

ll t;

//-----------------------//


ll sol( ll x ) {
	
	ll ans = 0;
	
	while( x > 0 ) {
		
		ans += x % 10;
		x /= 10;
		
	}
	
	if ( ans < 10 ) return ans;
	return sol(ans);
	
}

ll fac( ll x ) {
	
	ll ans = 1;
	
	for ( ll i = 2; i <= x; ++i ) ans *= i;
	
	return ans;
	
}


signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> t;
	while ( t-- ) {
		
		ll n; cin >> n;
		
		if ( n >= 6 ) {
			
			cout << 9 << endl;
			continue;
			
		}
		
		cout << sol(fac(n)) << endl;
		
	}

	return 0;
	
}


