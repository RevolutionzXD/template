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


const ll MAXN = 2e5 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN];
ll n, t;

//-----------------------//



bool check( ll a, ll b, ll c ) {
	
	if ( c <= b && c >= a ) return true;
	else return false;
	
}


signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n >> t;
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	while( t-- ) {
		
		ll x, y, res = 0;
		vector<ll> v;
		
		cin >> x >> y;
		
		for ( ll i = 1; i <= n; ++i ) {
			
			if ( check( x, y, a[i] ) ) {
				
				v.pb(a[i]);
				
			} 
			
		}
		
		ll w = v.size();
		
		for ( ll i = 0; i < w - 1; ++i ) {
			
			res += abs( v[i] - v[ i + 1 ] );
			
		}
		
		cout << res << endl;
		
		
		
	}

	return 0;
}


