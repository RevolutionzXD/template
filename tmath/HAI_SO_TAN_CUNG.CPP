// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, res;

    cin >> n; res = n % 100;

    if ( n < 10 ) {
        cout << -1;
        return 0;
    }

    if ( res < 10 ) cout << 0 << res;
    else cout << n % 100;

	return 0;
}


