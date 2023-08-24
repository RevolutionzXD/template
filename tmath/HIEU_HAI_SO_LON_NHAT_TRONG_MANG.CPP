// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;
const ll lim = 1e9 + 5;





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, mn = lim, mx = -lim;

	cin >> n;
	while ( n-- ) {
        ll x; cin >> x;

        mn = min ( mn, x );
        mx = max ( mx, x - mn );
	}

	cout << mx;

	return 0;
}





