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


const ll MAXN = 1e7 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN];
ll n, x, res;

//-----------------------//


void solve(){
	cin >> n >> x;
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	ll m = lwb( a + 1, a + n + 1, x / 2 ) - a;
	for ( ll i = 1; i <= m; ++i )
		for ( ll j = i + 1; j <= n; ++j ) {
			if( a[i] + a[j] <= x ) res++;
		}
	cout << res;
}



signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	solve();

	return 0;
	
}


