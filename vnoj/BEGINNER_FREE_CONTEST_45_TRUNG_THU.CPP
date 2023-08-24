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
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const ll MAXN = 105;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll n, m, res;
ll a[MAXN];

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n >> m;
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	sort( a + 1, a + n + 1 );
	
	for ( ll i = 1; i <= n; ++i ) {
		
		m -= a[i];
		res++;
		
	}
	
	while ( m > 0 ){
		
		m -= a[1];
		if ( m >= 0 ) res++;
		
	}
	
	cout << res;

	return 0;
	
}


