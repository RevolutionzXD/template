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
const ll MAXN = 1e7 + 5;
const ll INF = 1e7;

ll a[MAXN];
bool prime[MAXN];

ll n;

void sieve() {
	memset( prime, true, sizeof( prime ) );
	prime[0] = prime[1] = false;
	
	for ( ll i = 2; i * i <= MAXN; ++i ) 
		if ( prime[i] )
			for ( ll j = i * i; j <= MAXN; j += i ) prime[j] = false;
}

bool cp( ll x ) {
	int a = sqrt ( x );
	return a * a == x;
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	cin >> n; for ( ll i = 1; i <= n; ++i ) cin >> a[i];
	
	sieve();
	
	ll res = 0;
	for ( ll i = 1; i <= n; ++i ) {
		ll k = sqrt(a[i]);
		if ( prime[k] && cp(a[i]) ) {
		 res++;
		}
		
	}
	cout << res;
	return 0;
}


