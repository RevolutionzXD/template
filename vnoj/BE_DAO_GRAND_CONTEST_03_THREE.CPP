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
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

using namespace std;

const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

bool prime[MAXN];

//-----------------------//


void sieve() {
	
	memset( prime, true, sizeof(prime) );
	prime[0] = prime[1] = false;
	
	for ( ll i = 2; i * i <= MAXN; ++i ) 
		if ( prime[i] )
			for ( ll j = i * i; j <= MAXN; j += i ) prime[j] = false;
}






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	sieve();
	
	ll m; cin >> m;
	while( m-- ){
		ll x; cin >> x;
		ll sq = sqrt(x);
		if ( sq * sq == x && prime[sq] ) cout << 1 << endl;
		else cout << 0 << endl;
	}

	return 0;
}


