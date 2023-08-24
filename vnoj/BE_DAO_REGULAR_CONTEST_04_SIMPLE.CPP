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


const ll MAXN = 1e5 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

vector<ll> v;

//-----------------------//

ll digit( ll x ) {
	ll res = 0;
	while( x > 0 ) {
		res += x % 10;
		x /= 10;
	}
	return res;
}




signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	v.pb(0);
	
	ll n; cin >> n;
	for ( ll i = 1; i <= MAXN; ++i ) {
		if ( digit(i) % 10 == 0 ) v.pb(i);
	} 
	
	cout << v[n];
	
	

	return 0;
}


