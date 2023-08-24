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

ll a[MAXN][3], dp[MAXN][3];




int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll n; cin >> n;
	
	for ( ll i = 1; i <= n; ++i ) 
		for ( ll j = 1; j <= 3; ++j ) cin >> a[i][j];
		
	dp[1][1] = a[1][1]; dp[1][2] = a[1][2]; dp[1][3] = a[1][3];
	
	for ( ll i = 2; i <= n; ++i ) {
	
		dp[i][1] = a[i][1] + max( dp[i - 1][2], dp[i - 1][3] );
		dp[i][2] = a[i][2] + max( dp[i - 1][1], dp[i - 1][3] );
		dp[i][3] = a[i][3] + max( dp[i - 1][1], dp[i - 1][2] );
		
	}
	
	cout << max( {dp[n][1], dp[n][2], dp[n][3]} );

	
	return 0;
}


