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


const ll MAXN = 2e5 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll test;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> test;
	while(test--){
		ll a[MAXN];
		ll n;
		bool res = true;
		cin >> n;
		for (ll i = 1; i <= n; ++i) cin >> a[i];
		for (ll i = 1; i <= n; ++i){
			ll tmp = lwb(a + n + 1, a + 1, i) - a;
			cout << tmp << " " << a[i] << endl;
			if (tmp != a[i]){
				res = false;
				break;
			}

		}
		if (res) cout << "YES" << endl;
		else cout << "NO" << endl;
	}

	return 0;
	
}


