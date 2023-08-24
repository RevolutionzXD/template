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

ll n; 
ll f[MAXN];


struct dat {
	ll h, a, c;
} a[MAXN];




bool cmp ( dat a, dat b ) {
	return a.a > b.a;
}


signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	
	for ( ll i = 1; i <= n; ++i ) cin >> a[i].h >> a[i].a >> a[i].c;
	
	sort( a + 1, a + n + 1, cmp );
	
	f[0] = 1;
	
	for ( ll i = 1; i <= n; ++i ) {
		for ( ll j = a[i].a; j >= 0; --j )
			for ( ll k = a[i].c; k >= 0; --k ) {
				if ( j + k * a[i].h > a[i].a ) continue;
				f[j + k * a[i].h] = max( f[j + k * a[i].h], f[j] );
			}
	}
	
	for ( ll j = 40000; j >= 0; --j ) if ( f[j] != 0 ) {
		cout << j;
		return 0;
	}

}


