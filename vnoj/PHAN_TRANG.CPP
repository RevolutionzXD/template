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
const ll MAXN = 6000 + 5;
const ll INF = 1e15;


ll a[MAXN], f[MAXN];
ll n, L;



signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);



	cin >> n >> L;
	for ( ll i = 1; i <= n; ++i ) cin >> a[i];

	for ( ll i = 1; i <= n; ++i ) {
		f[i] = L + 1;
		ll j = i, S = a[i];
		while ( j > 0 && S <= L ) {
			f[i] = min( f[i], max( f[j - 1], L - S ) );
			S += a[--j];
		}
	}

	cout << f[n] << endl;
	
	return 0;
}


