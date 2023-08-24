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

ll a[MAXN], dp1[MAXN], dp2[MAXN];
ll n;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	dp1[0] = 0;
	dp1[1] = a[1];
	for ( ll i = 2; i <= n; ++i ) dp1[i] = __gcd( dp1[ i - 1 ], a[i] );
	dp2[1] = a[n];
	dp2[0] = 0;
	for ( ll i = 1; i <= n; ++i ) dp2[i] = __gcd( dp2[ i + 1 ], a[i] );
	for ( ll i = 1; i <= n; ++i ) {
		ll a = dp1[ i - 1 ];
		ll b = dp2[ i + 1 ];
		ll res = __gcd ( a, b );
		cout << res << " ";
	}

	return 0;
	
}


