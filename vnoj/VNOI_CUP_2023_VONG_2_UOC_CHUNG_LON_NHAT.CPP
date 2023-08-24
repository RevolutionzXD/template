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


const ll MAXN = 105;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN];
vector<ll> v;

//-----------------------//


ll ucln( ll a, ll b ) {
	
	if ( b == 0 ) return a;
	else return ucln( b, a % b );
}



signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll t; cin >> t;
	while ( t-- ) {
		
		memset( a, 0, sizeof(a) );
		v.clear();
		ll n;
		
		cin >> n; 
		for ( ll i = 1; i <= n; ++i ) cin >> a[i];
		
		for ( ll i = 1; i <= n; ++i ) {
			
			for ( ll j = 1; j <= n; ++j ) {
				
				if ( i != j ) {
					
					v.pb( ucln( a[i], a[j]) );
					
				}
				
			}
			
		}
		
		sort( v.begin(), v.end(), greater<> () );
		cout << v[2] << endl;
		
	}
	
	

	return 0;
}


