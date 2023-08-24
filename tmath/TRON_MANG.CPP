// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;


ll a[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n;

	cin >> n;
	for ( ll i = 1; i <= 2 * n; i++ ) cin >> a[i];

	sort ( a + 1, a + 2 * n + 1, greater <ll> () );

	for ( ll i = 1; i <= 2 * n; i++ ) cout << a[i] << " ";

	return 0;
}



