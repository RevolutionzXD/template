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

ll n, res;
ll a[MAXN], f[MAXN];

//-----------------------//


bool check( ll x ) {
	
	if ( x == -1 || x == 2 || x == -2 ) return true;
	if ( x == 1 ) return false;
	
	x = abs(x);
	
	ll cnt = 0;
	
	for( ll i = 2; i <= sqrt(x); ++i ) 
		if ( x % i == 0 ) cnt++;
		
	return ( ( cnt == 0 ) ? true : false );
	
}


signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	for( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	f[0] = 0;
	f[1] = a[1];
	
	for ( ll i = 1; i <= n; ++i ) f[i] = f[ i - 1 ] + a[i];
	
	for ( ll i = 1; i <= n; ++i ) {
		
		for ( ll j = i; j <= n; ++j ) {
			
			if ( check(i) && check(j) ) {
				
				ll tmp = f[j] - f[ i - 1 ];
				res = max( res, tmp );
				
				//cout << tmp << endl;
				
			}
			
		}
		
	}
	
	cout << res;
 	
	
	

	return 0;
	
}


