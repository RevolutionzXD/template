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


const ll MAXN = 1e5 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN], dp[MAXN];
ll n, m;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n >> m;
	for (ll i = 1; i <= n; ++i) cin >> a[i];
	dp[0] = 0, dp[1] = a[1];
	for (ll i = 2; i <= n; ++i) dp[i] = dp[i - 1] + a[i];
	while(m--) {
		ll x, y; cin >> x >> y;
		cout << dp[y] - dp[x - 1] << endl;
	}

	return 0;
	
}


