// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
using namespace std;
const ll MAXN = 1e6 + 5;
const ll INF = 1e15;

ll l, r, res;

bool check( ll x ) {
	
	ll msum = 0;
	for ( ll i = 2; i * i <= x; ++i ) {
		if ( x % i == 0 && x / i != i ) msum += i + x / i;
		if ( x % i == 0 && x / i == i ) msum += i;
	}
	
	if ( msum + 1 > x ) return true;
	return false;
	
}



signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> l >> r;
	for ( ll i = l; i <= r; ++i ) if (check(i)) res++;
	cout << res;

	return 0;
}


