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

int w[MAXN], f[MAXN];
int t;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> t;
	while( t-- ) {
		
		int n, a, b;
		memset( w, 0, sizeof(w) );
		memset( f, 0, sizeof(f) );
		
		cin >> n >> a >> b;
		for ( int i = 1; i <= n; ++i ) cin >> w[i];
		
		f[0] = 0; f[1] = w[1];
		for ( int i = 2; i <= n; ++i ) f[i] = f[ i - 1 ] + w[i];
		
		if ( a + b >= w[n] - w[0] + 1 ) {
			
			cout << "YES" << endl;
			continue;
			
		}
		
		bool sol1 = true;
		
		int x = a + w[1];
		int y = w[n] - b;
		
		for ( int i = 1; i <= n; ++i ) {
			
			if ( w[i] > x && w[i] < y ) {
				
				sol1 = false;
				break;
				
			}
			
		}
		
		
		swap( a, b );
		bool sol2 = true;
		x = a + w[1];
		y = w[n] - b;
		
		for ( int i = 1; i <= n; ++i ) {
			
			if ( w[i] > x && w[i] < y ) {
				
				sol2 = false;
				break;
				
			}
			
		}
		
		
		if ( sol1 || sol2 ) cout << "YES" << endl;
		else cout << "NO" << endl;
		
		
	}

	return 0;
}


