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



//-----------------------//



ll fibo ( ll n ) {
	
	ll a[2][2] = { { 1, 1 }, { 1, 0 } };
	ll b[2][2] = { { 1, 1 }, { 1, 0 } };
	
	for ( int i = 1; i <= n - 2; ++i ) {
		
		ll s1 = a[0][0] * b[0][0] + a[0][1] * b[1][0];
		ll s2 = a[0][0] * b[0][1] + a[0][1] * b[1][1];
		ll s3 = a[1][0] * b[0][0] + a[1][1] * b[1][0];
		ll s4 = a[1][0] * b[0][1] + a[1][1] * b[1][1];
		
		a[0][0] = s1;
		a[0][1] = s2;
		a[1][0] = s3;
		a[1][1] = s4;
 		
	}
	
	return a[0][0] + a[0][1];
	//return a[0][0];
}


signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll t; cin >> t;
	
	while( t-- ) {
		
		ll x; cin >> x;
		cout << fibo(x) << endl;
		
	}

	return 0;
	
}


