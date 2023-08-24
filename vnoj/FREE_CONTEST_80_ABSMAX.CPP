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


const ll MAXN = 2e5 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN];
ll n, sol1, sol2;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	sort( a + 1, a + n + 1 );
	
	sol1 = abs( a[1] + a[2] );
	sol2 = abs( a[n] + a[ n- 1 ] );
	
	cout << max( sol1, sol2 );  

	return 0;
}


