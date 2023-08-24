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


const ll MAXN = 55;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN];
ll n, res, suu, ti;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	for (ll i = 1; i <= n; ++i ) cin >> a[i];
	sort(a + 1, a + n + 1);
	ll k = 0; k = n % 2;
	for (ll i = 1; i <= n / 2; ++i) suu += a[i];
	for (ll i = n / 2 + k; i <= n; ++i) ti += a[i];
	cout << ti - suu;

	return 0;
	
}


