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


bool check( ll a, ll b, ll c, ll d ) {
	
	if ( a == c && b == d ) return true;
	return false;
	
}



signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll x1, x2, y1, y2;
	cin >> x1 >> y1 >> x2 >> y2;
	
	if ( !check( x2, y2, x1 - 2, y1 + 1 ) && !check( x2, y2, x1 - 1, y1 + 2 ) && !check( x2, y2, x1 + 1, y1 + 2 ) && !check( x2, y2, x1 + 2, y1 + 1 ) && !check( x2, y2, x1 + 2, y1 - 1 ) && !check( x2, y2, x1 + 1, y1 - 2 ) && !check( x2, y2, x1 - 1, y1 - 2 ) && !check( x2, y2, x1 - 2, y1 - 1 ) ) cout << "No";
	else cout << "Yes";
	
	

	return 0;
}


