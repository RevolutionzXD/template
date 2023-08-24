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

const ll MAXN = 1e5 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN], b[MAXN];

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll t; cin >> t;
	while ( t-- ) {
		ll n; cin >> n;
		for ( ll i = 1; i <= n; ++i ) cin >> a[i];
		for ( ll i = 1; i <= n; ++i ) cin >> b[i];
		
		sort( a + 1, a + n + 1 );
		sort( b + 1, b + n + 1, greater<>() );
		
		ll res = 0;
		for ( ll i = 1; i <= n; ++i ) res += max( a[i], b[i] );
		
		cout << res << endl;
	}

	return 0;
}


