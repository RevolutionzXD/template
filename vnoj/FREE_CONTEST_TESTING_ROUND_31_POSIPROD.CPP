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


const ll MAXN = 105;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[MAXN];
ll n, pos, neg;

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n; 
	for ( ll i = 1; i <= n; ++i ) {
		
		cin >> a[i];
		
		if ( a[i] > 0 ) pos++;
		if ( a[i] < 0 ) neg++;
		if ( a[i] == 0 ) {
			cout << -1;
			return 0;
		}
		
	}
	
	if ( pos > neg ) cout << neg;
	else cout << pos;
 	
	

	return 0;
}


