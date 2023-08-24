// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll a, b; cin >> a >> b;

	if ( b == 2 ) {
        if ( b + 1  % 2 == 0 ) cout << 1;
        else cout << 2;
	}

	else {
        if ( b % 3 == 1 ) cout << 1;
        if ( b % 3 == 0 ) cout << 0;
        if ( b % 3 == 2 ) {
        if ( b + 1  % 2 == 0 ) cout << 1;
        else cout << 2;
	}
	}

	return 0;
}



