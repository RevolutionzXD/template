// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 100;


ll a[MAXN];




int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, dem = 0; cin >> n;

	for ( ll i = 1; i <= n; i++ ) cin >> a[i];

	if ( next_permutation ( a + 1, a + n + 1 )) {
        for ( ll i = 1; i <= n; i++ ) cout << a[i] << " ";
        cout << endl;
        dem++;
	}

    if ( dem == 0 ) {
        sort ( a + 1, a + n + 1 );

        for ( ll i = 1; i <= n; i++ ) cout << a[i] << " ";
    }


	return 0;
}




