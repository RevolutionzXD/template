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



//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll t; cin >> t;
	while( t-- ) {
		string s; ll k; 
		cin >> s >> k;
		
		if ( k == 1 ) {
			cout << "YES" << endl;
			continue;
		}
		
		if ( k == 2 ){
			char h = s.back();
			if ( ( h - '0') % 2 == 0 ) cout << "YES" << endl;
			else cout << "NO" << endl;
			continue;
		}
		
		if ( k == 3 ){
			
			char h = s.back();
			
			ll summ = 0;
			for ( char i : s ) {
				summ += i - '0';
			}
			
			if ( ( h - '0' ) % 2 == 0 && summ % 3 == 0 ) cout << "YES" << endl;
			else cout << "NO" << endl;
		}
				
	}

	return 0;
}


