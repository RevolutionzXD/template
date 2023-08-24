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

int t;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> t;
	while( t-- ) {
		
		int n, a, b;
		string s;
		cin >> n >> a >> b;
		cin >> s;
		
		int x = 0, y = 0, cnt = 1;
		bool cmp = false;
		int sol = INT_MAX;
		bool check1 = true;
		
		for ( int i = 1; i < n; ++i ) {
			
			if ( s[i] == s[0] ) check1 = true;
			else {
				
				check1 = false;
				break;
				
			}
			
		}
		
		if (check1) {
			
			cout << "YES" << endl;
			continue;
			
		}		
		
		for ( int i = 0; i < n; ++i ) {
			
			if ( ( s[i] == '0' && cmp == false ) || ( s[i] == '1' && cmp == true ) ) cnt++;
			else cnt = 1;
			
			sol = min( sol, cnt );
			
			if ( s[i] == '0' ) cmp = false;
			else cmp = true;
			
			
		}
		
		bool check2 = false;
		for ( int i = a; i <= b; ++i ) {
			
			if ( sol % i == 0 || ( n - sol ) % i == 0 ) {
				
				check2 = true;
				break;
				
			}
			
		}
		
		if (check2) cout << "YES" <<endl;
		else cout << "NO" << endl;
		
		
	}

	return 0;
}


