// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, f = 0; cin >> n;

	f = pow ( 2, n ) + 1;

	cout << to_string((f * (f + 1)) / 2);


	return 0;
}



