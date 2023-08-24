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

const ll MAXN = 1e5 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll n, k, ans;
ll a[MAXN], pre[MAXN];

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n >> k;
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	pre[1] = a[1];
	for ( ll i = 2; i <= n; ++i ) pre[i] = pre[i - 1] + a[i];
	
	for ( ll i = 1; i <= n - k + 1; ++i ) {
		ll f = pre[k + i - 1] - pre[i - 1];
		ans = max( ans, f );
	}
	
	cout << ans;


	return 0;
}


