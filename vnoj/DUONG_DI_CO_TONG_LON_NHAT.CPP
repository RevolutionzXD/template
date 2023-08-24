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
using namespace std;
const ll MAXN = 1005;
const ll INF = 1e15;

ll a[MAXN][MAXN], dp[MAXN][MAXN];

ll n, m, res = -inf;

void input() {
	
	cin >> m >> n;

	for ( ll i = 1; i <= n; ++i ) dp[0][i] = dp[m + 1][i] = -inf;
	
	for ( ll i = 1; i <= m; ++i ) 
		for ( ll j = 1; j <= n; ++j ) cin >> a[i][j];
	
}

void solve() {
	
	for ( ll j = 1; j <= n; ++j ) {
		for ( ll i = 1; i <= m; ++i ) {
			dp[i][j] = max ({ dp[i - 1][j - 1], dp[i][j - 1], dp[i + 1][j - 1] }) + a[i][j];
		}
	}
	

	for ( ll i = 1; i <= m; ++i ) res = max( res, dp[i][n] );

	cout << res;

}
 


signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	input();
	solve();

	return 0;
}


