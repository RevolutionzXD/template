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

vector<ll> v;
ll n;

//-----------------------//


ll power( ll a, ll b ){
	if ( b == 1 ) return a;
	ll tmp = power( a, b / 2 );
	if ( b & 1 ) return tmp * tmp * a;
	else return tmp * tmp;
}


void solve(){
	cin >> n;
	while( n > 0 ){
		v.pb( n % 2 );
		n /= 2;
	}
	
	ll k = v.size();
	for ( ll i = 0; i < v.size(); ++i ){
		if( v[i] * pow( 2, i ) != 0 ) cout << v[i] * power( 2, i ) << " ";
	}
}


signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	solve();

	return 0;
	
}


