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


const ll MAXN = 505;
const ll MOD = 1e9 + 6;


//---------Value---------//

char a[MAXN][MAXN];
ll m, n;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> m >> n;
	for ( ll i = 1; i <= m; ++i ) 
		for ( ll j = 1; j <= n; ++j ) cin >> a[i][j];
		
	for ( ll i = 1; i <= m - 1; ++i )
		for ( ll j = 1; j <= n - 1; ++j ) {
			
			if ( a[i][j] != a[ i + 1][j] && a[i][j] != a[i][ j + 1] && a[ i + 1][j] != a[ i + 1][ j + 1] && a[i][ j + 1] == a[ i + 1 ][ j + 1 ] ) {
				
				cout << "YES";
				return 0;
				
			} 
			
		}
		
	cout << "NO";
		
	

	return 0;
}


