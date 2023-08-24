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

ll n, x, res = 1;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n >> x;
	ll a = x / n;
	
	for ( ll i = 1; i * i <= a; ++i ) {
		if ( a % i == 0 ) {
			if ( i * a / i * n == x ){
				res = max( res, a / i );
				res = max( res, i );
			}
		}
	}
	
	cout << res;

	return 0;
	
}


