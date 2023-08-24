// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, m, res = 0;

    cin >> n >> m;

    for ( ll i = 1; i <= n; i++ ) {
        for ( ll j = 1; j <= m; j++ ) {
            if ( (i + j) % 5 == 0 ) res++;
        }
    }

    cout << res;

	return 0;
}



