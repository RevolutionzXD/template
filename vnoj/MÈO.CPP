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

ll n, res1, res2, res3;
ll a[MAXN], f[MAXN], dp[MAXN];

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;	
	for( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	a[0] = 0;
	for ( ll i = 0; i < n; ++i ) f[i] = a[i] + a[ i + 1 ];
	
	
	dp[0] = f[0]; dp[1] = f[1], dp[2] = f[2];
	for( ll i = 3; i <= n; ++i ) {
		
		dp[i] = max( dp[ i - 3 ], max( dp[ i - 4 ], dp[ i - 5 ] ) ) + f[i];
		
	}
	
	cout << dp[n];
	
	

		
	
	
	
	

	return 0;
	
}


