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



ll a[MAXN], dp[MAXN];
ll n, x;





signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n >> x;
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	for ( ll i = 1; i <= x; ++i ) dp[i] = inf;
	
	dp[0] = 0;
	
	for ( ll i = 1; i <= n; ++i ) {
		
		for ( ll j = 0; j <= x; ++j ) {
			
			if ( j >= a[i] ) {
				
				dp[j] = min( dp[j], dp[ j - a[i] ] + 1 );
				
			}
		}
	}
	
	
	cout << ( dp[x] != inf  ? dp[x] : -1 );
	
	

	return 0;
}


