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


const ll MAXN = 5e5 + 5;
const ll MOD = 1e9 + 7;


//---------Value---------//

ull a = 1, b = 1;
ll x[MAXN], y[MAXN];
ll u, v;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> u >> v;
	for ( ll i = 1; i <= u; ++i ) {
		
		cin >> x[i];
		a *= x[i];
		
	}
	for ( ll i = 1; i <= v; ++i ) {
		
		cin >> y[i];
		b *= y[i];
		
	}
	
	cout << __gcd( a, b ) % MOD;
	

	return 0;
}


