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


const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

ll a[3];

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	ll n, summ = 0; cin >> n;
	
	while( n > 0 ) {
		ll k = n % 10;
		summ += k;
		a[ k % 3 ]++;
		n /= 10;
	}
	
	summ %= 3;
	
	if ( summ == 0 ) {
		cout << 0;
	}
	else if( summ == 1 ) {
		if ( a[1] != 0 ) cout << 1;
		else cout << 2;
	}
	else if( summ == 2 ) {
		if ( a[2] != 0 ) cout << 1;
		else cout << 2;
	}

	return 0;
}


