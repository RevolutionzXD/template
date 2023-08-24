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

ll n, res;
ll f[MAXN + 5];


//-----------------------//







signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	for ( ll i = 1; i <= MAXN; ++i ) {
		
		for ( ll j = i; j <= MAXN; j += i ) {
			
			++f[j];
			
		}	
		
	}
			
	cin >> n;
	
	
	for ( ll i = 1; i < n; ++i ) {
		
		res += f[i] * f[ n - i ];
		
	}
		
	cout << res;	

	return 0;
	
}


