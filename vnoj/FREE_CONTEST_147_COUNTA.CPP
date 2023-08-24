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
const ll MOD = 1e9 + 7;


//---------Value---------//

ll n, res;

//-----------------------//


ll pow( ll a, ll b ){
	
	if( b == 1 ) return a;
	
	if( b & 1 ) {
		ll x = pow( a, b / 2 );
		return x * x * a;
	}
	else {
		ll x = pow( a, b / 2 );
		return x * x;
	}
	
}



signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	res = ( 2 * ( pow( 10, n ) - pow( 9, n ) ) - ( pow( 10, n ) - pow( 8, n ) ) );
	res %= MOD;
	cout << res;

	return 0;
	
}
