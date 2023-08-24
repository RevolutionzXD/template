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


const ll MAXN = 105;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll test;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> test;
	while( test-- ) {
		ll n; cin >> n;
		ll a[MAXN];
		for ( ll i = 1; i <= n; ++i ) cin >> a[i];
		sort( a + 1, a + n + 1 );
		if( a[1] == a[n] || n <= 1 ) {
			cout << -1 << endl;
			//cout << "error" << endl;
			continue;
		}
		ll b = 0;
		for ( ll i = 2; i <= n; ++i ){
			if( a[i] != a[1] ) {
				b = i - 1;
				break;
			}
		}
		cout << b << " " << n - b << endl;
		for( ll i = 1; i <= b; ++i ) cout << a[i] << " ";
		cout << endl;
		for( ll i = b + 1; i <= n; ++i ) cout << a[i] << " ";
		cout << endl;
	}

	return 0;
	
}


