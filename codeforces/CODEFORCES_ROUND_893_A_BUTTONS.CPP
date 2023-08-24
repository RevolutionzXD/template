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

ll n;

//-----------------------//






signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	while( n-- ){
		ll a, b, c; cin >> a >> b >> c;
		if( a > b ) {
			cout << "First" << endl;
			continue;
		}
		else if( a < b ){
			cout << "Second" << endl;
			continue;
		}
		else if( c & 1 ){
			cout << "First" << endl;
			continue;
		}
		else {
			cout << "Second" << endl;
			continue;
		}
	}

	return 0;
	
}


