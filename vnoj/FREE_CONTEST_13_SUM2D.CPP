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
#define pi M_PI
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const ll MAXN = 205;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN][MAXN], dp[MAXN][MAXN];
ll m, n, t;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> m >> n >> t;
	for (ll i = 1; i <= m; ++i){
		for (ll j = 1; j <= n; ++j) cin >> a[i][j];
	}
	dp[1][1] = a[1][1];
	for (ll i = 1; i <= m; ++i){
		for (ll j = 1; j <= n; ++j) {
			dp[i][j] = dp[i - 1][j] + dp[i][j - 1] - dp[i - 1][j - 1] + a[i][j];
		}
	}
	while(t--){
		ll a, b, c, d; cin >> a >> b >> c >> d;
		
		ll res = dp[c][d] - dp[c][b - 1] - dp[a - 1][d] + dp[a - 1][b - 1];
		cout << res << endl;
	}

	return 0;
	
}


