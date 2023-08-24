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
const ll MAXN = 60000 + 5;
const ll INF = 1e15;

ll t[MAXN], r[MAXN], dp[MAXN][2];
ll n;

void input() {
	
	cin >> n; 
	for ( ll i = 1; i <= n; ++i ) cin >> t[i];
	for ( ll i = 1; i <= n - 1; ++i ) cin >> r[i];
	
}

void solve() {
	
	dp[1][0] = inf; 
	dp[2][0] = r[1];
	
	dp[1][1] = t[1];
	dp[2][1] = t[1] + t[2];
	
	for ( ll i = 3; i <= n; ++i ) {
		
		dp[i][0] = dp[i - 1][1] - t[i - 1] + r[i - 1];
		dp[i][1] = min( dp[i - 1][0], dp[i - 1][1] ) + t[i];
		
	}
	
	cout << min( dp[n][0], dp[n][1] );
}



signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	input();
	solve();

	return 0;
}


