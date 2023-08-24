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

ll n, a, b;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	for ( ll i = 1; i <= n; ++i ) {
		ll x; cin >> x;
		
		while ( x % 2 == 0 ) {
			a++;
			x /= 2;
		}
		while ( x % 5 == 0 ) {
			b++;
			x /= 5;
		}
	}
	
	cout << min( a, b );

	return 0;
}


