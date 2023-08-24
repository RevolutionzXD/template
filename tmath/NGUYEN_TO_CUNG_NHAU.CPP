// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;




int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll x, k, dem = 0;

    cin >> x >> k;

    for ( ll i = 1; i <= k; i++ ) {
        if (__gcd(x, i) == 1) dem++;
    }

    cout << dem;

	return 0;
}


