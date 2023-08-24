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

pair<ll, ll> a[MAXN];
ll n, ans;

//-----------------------//


ll mht( ll a, ll b, ll c, ll d ) {
	return abs( a - c ) + abs( b - d );
}


signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	for ( ll i = 1; i <= n; ++i ) {
		cin >> a[i].fi >> a[i].se;
	}
	
	for ( ll i = 1; i <= n; ++i ) {
		
		for ( ll j = i + 1; j <= n; ++j ) {
				
			ans += mht( a[i].fi, a[i].se, a[j].fi, a[j].se );
			
		}
		
	}
	
	cout << ans;
	
	
	

	return 0;
	
}


