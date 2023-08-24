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

ll a[MAXN];
ll test;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> test;
	while( test-- ){
		ll n; cin >> n;
		for ( ll i = 1; i <= n; ++i ) cin >> a[i];
		ll tmp = a[1], res = 0;
		for ( ll i = 2; i <= n; ++i ){
			if( tmp != a[2] && tmp != a[3] ){
				res = 1;
				break;
			}
			if( tmp != a[i] && ( a[i] != a[ i + 1 ] || a[i] != a[ i - 1 ] ) ) {
				res = i;
				break;
			}
			if( tmp != a[i] && ( a[i] == a[ i + 1 ] || a[i] == a[ i - 1 ] ) ){
				res = 1;
				break;
			}
		}
		cout << res << endl;
	}

	return 0;
	
}


