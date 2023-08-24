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


const ll MAXN = 2e5 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

int a[MAXN];
bool color[MAXN];
vector<int> v, v1, v2;
ll t;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> t;
	while( t-- ) {
		
		memset( a, 0, sizeof(a) );
		memset( color, false, sizeof( color ) );
		v.clear(); v1.clear(); v2.clear();
		
		int n, k, f; 
		
		cin >> n >> k;
		for ( int i = 1; i <= n; ++i ) {
			
			cin >> a[i];
			
			if ( a[i] % 2 == 0 ) {
				color[i] = true;
				v1.pb(a[i]);
			}
			else {
				color[i] = false;
				v2.pb(a[i]);
			}
			
		}
		
		sort( v1.begin(), v1.end() );
		sort( v2.begin(), v2.end() ); 
		
		// index variable for vector
		ll t = 0, d = 0;
		
		v.pb(0);
		
		bool ok = true;
		
		for ( ll i = 1; i <= n; ++i ) {
			
			
			if ( color[i] == true ) {
				
				v.pb(v1[t]);
				t++;
				
			}
			
			else {
				
				v.pb(v2[d]);
				d++;
				
			}
			
			if ( v[i] < v[ i - 1 ] ) {
				
				cout << "NO" << endl;
				ok = false;
				break;
				
			}
			
 		}
 		
 		if (ok) cout << "YES" << endl;
		
		
		
	
				
 		
	}

	return 0;
}


