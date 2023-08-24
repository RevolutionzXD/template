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


const ll MAXN = 1e4 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN], dp[MAXN];
ll n, res = -inf;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	memset( dp, 0, sizeof(dp) );
	
	for ( ll i = 1; i <= n; ++i ) {
		
		for ( ll j = 1; j < i; ++j ) {
			
			if ( a[i] > a[j] ) {
				
				dp[i] = max( dp[i], dp[j] + 1 );
				
			}
			
		}
		
	}
	
	for ( ll i = 2; i <= n; ++i ) res = max( res, dp[i] );
	cout << res + 1;


	return 0;
	
}


