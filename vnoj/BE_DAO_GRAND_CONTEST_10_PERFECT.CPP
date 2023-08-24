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


const ll MAXN = 1e5 + 5;
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
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	while( q-- ){
		ll l, r; cin >> l >> r;
		ll maxx = 0, minn = inf;
		for ( ll i = l; i <= r; ++i ){
			if ( a[i] > maxx ) maxx = a[i];
			if ( a[i] < minn ) minn = a[i];
		}
		
		if ( maxx - minn == r - l ) cout << "YES" << endl;
		else cout << "NO" << endl;
		
	}

	return 0;
	
}


