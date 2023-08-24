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


const ll MAXN = 1e4 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN];

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	memset( a, 0, sizeof(a) );
	
	ll n; cin >> n;
	for ( ll i = 1; i <= n; ++i ) {
		ll x; cin >> x;
		a[x]++;
	}
	
	ll ans = 0, sumn = 0;
	
	for ( ll i = 1; i <= MAXN; ++i ){
		if ( sumn < a[i] ){
			sumn = a[i];
			ans = i;
		}
	}
	
	cout << ans;

	return 0;
}


