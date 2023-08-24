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

const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN], pre[MAXN];
ll x, y, n, ans = inf;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n; 
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	pre[1] = a[1];
	for ( ll i = 2; i <= n; ++i ) pre[i] = pre[i - 1] + a[i];
	
	for ( ll i = 1; i <= n; ++i ) {
		x = pre[i];
		y = pre[n] - pre[i];
		ans = min( ans, abs( x - y ) );
	}
	
	cout << ans;

	return 0;
}


