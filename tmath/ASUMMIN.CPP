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


ll m, n;
ll a[MAXN], b[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	cin >> m >> n;
	for ( ll i = 1; i <= m; ++i ) cin >> a[i];
	for ( ll i = 1; i <= n; ++i ) cin >> b[i];
	
	ll res = MAXN;
	ll res1 = res2 = 0;
	
	for ( ll i = 1; i <= m; ++i ) {
		ll k = lwb( b + 1, b + n + 1, a[i] ) - a;
		res = min ( res, abs( a[i] + b[k] ));
	} 
	
	cout << res;

	return 0;
}


