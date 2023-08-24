// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;


ll a[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n; cin >> n;

	for ( ll i = 1; i <= n; i++ ) cin >> a[i];

	unsigned long long res = 1;
	for ( ll i = 1; i <= n; i++ ) res *= a[i];
    if ( res < 1e18 ) cout << to_string( res );
    else cout << -1;

	return 0;
}
