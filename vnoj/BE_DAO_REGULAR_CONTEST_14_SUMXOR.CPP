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


const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll t;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> t; 
	while( t-- ) {
		
		unsigned int x, y; cin >> x >> y;
		y--;
		ll k = x % 4, l = y % 4;
		
		switch(k) {
			
			case 1:
				x = 1;
			
			case 2:
				x++;
				
			case 3:
				x = 0;
			
		}
		
		switch(l) {
			
			case 1:
				y = 1;
			
			case 2:
				y++;
				
			case 3:
				y = 0;
			
		}
		
		int res = x ^ y;
		cout << res << endl;
		
	}

	return 0;
}


