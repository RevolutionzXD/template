// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;
const ll mod = 1e9 + 7;


ll POW ( ll a, ll n ) {
	if ( n == 1 ) return a;
	if ( n % 2 == 0 ) return  ( POW ( a, n / 2 ) * POW ( a, n / 2 ) ) % mod;
	else return ( POW ( a, n / 2 ) * POW ( a, ( n / 2 ) ) * a ) % mod;
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll a, n; cin >> a >> n;
	
	
	cout << POW ( a, n ) % mod;
	

	

	return 0;
}


