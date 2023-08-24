// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e4 + 5;

ll a[MAXN], b[MAXN];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n;

	cin >> n;
	for ( ll i = 1; i <= n / 2; i++ ) cin >> a[i];
	for ( ll i = 1; i <= n / 2; i++ ) cin >> b[i];

	sort( a + 1, a + n / 2 + 1 );
	sort( b + 1, b + n / 2 + 1, greater <ll>());

	for ( ll i = 1; i <= n / 2; i++ ) cout << a[i] << " ";
	for ( ll i = 1; i <= n / 2; i++ ) cout << b[i] << " ";

	return 0;
}



