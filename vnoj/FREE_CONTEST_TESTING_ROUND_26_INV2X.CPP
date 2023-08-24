// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN];

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);

	ll n, res = 0; cin >> n;
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	for ( ll i = 1; i <= n - 1; ++i ) 
		for ( ll j = i + 1; j <= n; ++j ) if ( a[i] > 2 * a[j] ) res++;
		
	cout << res;
	
	
	
	return 0;
}


