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

ll h[MAXN], dp[MAXN];






int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll n;
	cin >> n; for ( ll i = 1; i <= n; ++i ) cin >> h[i];
	
	dp[1] = h[1];
	dp[2] = abs( h[2] - h[1] ) + dp[1];
	//for ( ll i = 2; i <= n; ++i ) dp[i] = min( abs( h[i] - h[ i - 1 ]), abs( h[i] - h[ i - 2 ] ) );
	// 
	for ( ll i = 3; i <= n; ++i ) {
		
		dp[i] = min( abs( h[i] - h[i - 1] ) + dp[i - 1], abs( h[i] - h[i - 2] ) + dp[i - 2] );
		
	}
	
	cout << dp[n] - h[1];

	return 0;
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}


