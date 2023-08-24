// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;


ll a[MAXN], b[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, q;

	cin >> n;
	for ( ll i = 1; i <= n; i++ ) cin >> a[i];

	sort ( a + 1, a + n + 1 );

	cin >> q;
	for ( ll i = 1; i <= q; i++ ) cin >> b[i];

	for ( ll i = 1; i <= q; i++ ) {

        ll k = upper_bound ( a + 1, a + n + 1, b[i] ) - a - 1;
        cout << k << '\n';


	}




	return 0;
}



