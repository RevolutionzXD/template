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
const ll MOD = 1e9 + 7;


//---------Value---------//



//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll t; cin >> t;
	while( t-- ) {
		string a, b;
		ll res = 1;
		cin >> a >> b;
		
		ll k = a.size();
		for ( ll i = 0; i < k; ++i ) {
			
			if ( a[i] == 'X' && b[i] == 'X' ) res *= 2;
			
			if ( a[i] == 'O' && b[i] == 'O' ) {
				res = 0;
				break;
			}
			
			res %= MOD;			
		}
		
		cout << res << endl;
	}

	return 0;
}


