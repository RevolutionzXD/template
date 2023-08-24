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

ll a[MAXN], dp[MAXN];
ll n, k, res;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n >> k;
	a[0] = 0;
	for( ll i = 1; i <= n; ++i ) cin >> a[i];
	for( ll i = 1; i < k; ++i ) dp[i] = a[i];
	for( ll i = k; i <= n; ++i ) dp[i] = a[i] + dp[ i - 1 ] - a[ i - k ];
	
	for ( ll i = 1; i <= k + 1; ++i ) {
		ll tmp = 0, f = k + 1;
		for ( ll j = i; j <= n; j += f ) tmp += dp[j];
		res = max( res, tmp );
		//cout << j << endl;
	}
	
	cout << res;

	return 0;
	
}


