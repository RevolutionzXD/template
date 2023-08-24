// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 7;

ll a[MAXN];


ll frog ( ll n, ll k ) {
	
	if ( n == 0 ) {
	
		for ( ll i = n - k; i < n; i++ ) {
			
			a[n] = ( a[n] + frog ( i, k ) ) % MOD ;
		}
		
		return a[n];
	
	}
	
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll n, k; cin >> n >> k;
	
	a[0] = 1; a[1] = 1;
	
	cout << frog ( n, k );

	return 0;
}


