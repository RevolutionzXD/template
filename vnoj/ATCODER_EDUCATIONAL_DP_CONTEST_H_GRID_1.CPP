// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf 8
using namespace std;
const ll MAXN = 1e6 + 5;
const ll INF = 1e15;
const ll MOD = 1e9 + 7;


char a[2000][2000]; ll dp[2000][2000];


signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll n, m; cin >> n >> m;
	
	for ( ll i = 1; i <= n; ++i ) 
		for ( ll j = 1; j <= m; ++j ) cin >> a[i][j];
	
	dp[1][1] = 1;
	
	for ( ll i = 1; i <= n; ++i ) {
		
		for ( ll j = 1; j <= m; ++j ) {
			
			if ( a[i][j] == '#' || ( i == 1 && j == 1 ) ) continue;
			if ( i - 1 > 0 && a[i - 1][j] != '#' ) dp[i][j] = dp[i - 1][j];
			if ( j - 1 > 0 && a[i][j - 1] != '#' ) dp[i][j] = ( dp[i][j] + dp[i][j - 1] ) % MOD;
			
		}
		
	}
	
	cout << dp[n][m];


	
	return 0;
}


