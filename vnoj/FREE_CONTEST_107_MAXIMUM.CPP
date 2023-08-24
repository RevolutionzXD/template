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


const ll MAXN = 1005;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN];
ll n, q;

//-----------------------//




signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n >> q;
	for( ll i = 1; i <= n; ++i ) cin >> a[i];
	sort( a + 1, a + n + 1 );
	while( q-- ){
		ll l, r, val; cin >> l >> r >> val;
		ll k = lwb( a + l, a + r, val ) - a;
		if( a[k] < val || a[k] < a[1] || a[k] > a[n] ){
			cout << -1;
			return 0;
		}
		cout << a[k] << endl;
	}

	return 0;
	
}


