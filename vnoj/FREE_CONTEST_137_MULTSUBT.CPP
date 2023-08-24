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

ll x, k, cnt;
vector<int> v;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> x >> k;
	
	while( x > 1 ) {
		
		if ( x % k == 0 ) {
			
			x /= k;
			cnt++;
			v.pb(1);
			
		}
		
		else {
			
			x++;
			v.pb(2);
			cnt++;
			
		}
		
	}
	
	cout << cnt << endl;
	
	for ( auto i : v ) cout << i << " ";

	return 0;
}


