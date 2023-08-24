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
const ll MOD = 1e9 + 7;


//---------Value---------//

ll n, res;

//-----------------------//

ll sqr( ll x ){
	return x * x % MOD;
}

ll pow( ll a, ll b ){
	if ( b == 0 ) return 1;
	else{
		if ( b & 1 ) return a * ( sqr( pow ( a, b / 2 ) ) ) % MOD;
        else return sqr(pow(a, b / 2) ) % MOD;
	}
}


signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	ll k = 2;
	cout << pow( k, n - 1 ) - 1;

	return 0;
	
}


