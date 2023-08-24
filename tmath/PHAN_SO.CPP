// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll a, b, c, d; cin >> a >> b >> c >> d;

    if ( ( a * d ) == ( c * b ) || ( a * c ) == ( b * d ) ) cout << "YES";
    else cout << "NO";

	return 0;
}



