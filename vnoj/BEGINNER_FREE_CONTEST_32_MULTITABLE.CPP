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


const ll MAXN = 55;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN][MAXN];
ll n;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	for ( ll i = 1; i <= n; ++i ) 
		for ( ll j = 1; j <= n; ++j ) cin >> a[i][j];
		
	for ( ll i = 1; i <= n; ++i ) 
		for ( ll j = 1; j <= n; ++j )
			if ( i == j ) {
				
				cout << sqrt(a[i][j]) << " ";
				
			}
	
	

	

	return 0;
	
}


