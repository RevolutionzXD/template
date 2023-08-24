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


const ll MAXN = 1e4 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN];
ll n, res1, res2, res3, res4;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	for (ll i = 1; i <= n; ++i ) cin >> a[i];
	sort(a + 1, a + n + 1);
	res1 = a[n - 1] * a[n];
	res2 = a[1] * a[2];
	res3 = a[n - 2] * a[n - 1] * a[n];
	res4 = a[1] * a[2] * a[n];
	cout << max(res1, max(res2, max(res3, res4)));
	

	return 0;
	
}


