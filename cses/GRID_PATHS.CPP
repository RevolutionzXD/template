// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
using namespace std;

const ll MAXN = 1005;
const ll MOD = 1e9 + 7;

//---------Value---------//

ll n;
char a[MAXN][MAXN];
ll dp[MAXN][MAXN];

//-----------------------//





signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n; 
	
	for ( ll i = 1; i <= n; ++i )
		for ( ll j = 1; j <= n; ++j ) cin >> a[i][j];
		
	if ( n == 1 ) {
		
		if ( a[1][1] == '.' ) {
			cout << 1;
			return 0;
		}
		
		else {
			cout << 0;
			return 0;
		}
	}
		
	dp[1][1] = 1;
	for ( ll i = 1; i <= n; ++i ) {
		
		for ( ll j = 1; j <= n; ++j ) {
			
			if ( a[i][j] == '*' || i == 1 && j == 1 ) continue;
			if ( i - 1 > 0 && a[i - 1][j] != '*' ) dp[i][j] = dp[i - 1][j];
			if ( j - 1 > 0 && a[i][j - 1] != '*') dp[i][j] = ( dp[i][j] + dp[i][j - 1] ) % MOD;
			
		}
		
	}
	
	cout << dp[n][n];
	
	

	return 0;
}


