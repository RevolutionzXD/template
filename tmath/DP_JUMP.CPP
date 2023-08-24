// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;



ll a[MAXN], force[MAXN];

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n; cin >> n;
	for ( ll i = 1; i <= n; i++ ) cin >> a[i];

	force[2] = abs ( a[1] - a[2] );

	for ( ll i = 3; i <= n; i++ ) {
        force[i] = min ( force[ i - 1 ] + abs ( a[ i - 1 ] - a[i]), force[ i - 2 ] + 3 * abs ( a[i] - a[ i - 2]));
	}

	cout << force[n];






	return 0;
}



