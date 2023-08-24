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

int a, b, res;

//-----------------------//


int flip( int x ) {
	
	int res = 0;
	while ( x > 0 ) {
		
		res += x % 10;
		res *= 10;
		x /= 10;
		
	}
	
	res /= 10;
	return res;
	
}



signed main() {

	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> a >> b;
	
	for ( int i = a; i <= b; ++i ) {
		
		if ( __gcd( i, flip(i) ) == 1 ) res++;
		
	}
	
	cout << res;

	return 0;
	
}


