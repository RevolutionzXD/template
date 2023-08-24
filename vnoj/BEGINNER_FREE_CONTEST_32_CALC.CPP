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



//-----------------------//




signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll t = 2;
	while( t-- ) {
		
		ll x, y, z; cin >> x >> y >> z;
		
		if ( x + y - z == 0 || x + z - y == 0 || y + x - z == 0 || y + z - x == 0 || z + x - y == 0 || z + y - x == 0 ) cout << "yes" << endl;
		else cout << "no" << endl;
		
	}

	return 0;
	
}


