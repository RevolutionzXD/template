// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e9 + 5;





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, res = 1; cin >> n;

    for ( ll i = 1; i <= n; i++) res *= i;

    cout << res;

	return 0;
}


