// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
using namespace std;
const ll MAXN = 1e6 + 5;
const ll INF = 1e15;

ll a[MAXN;
ll n, k;


void analyze() {
	cin >> n >> k;
	
	a[1] = 1;
	for ( ll i = 2; i <= n; ++i ) {
		ll f = ( log10( a[ i - 1 ]) + 1 ) * 2;
		ll l = pow( 10, f + 1 );
		a[i] = i * l + a[ i - 1 ] 
	}
}






int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	

	return 0;
}


