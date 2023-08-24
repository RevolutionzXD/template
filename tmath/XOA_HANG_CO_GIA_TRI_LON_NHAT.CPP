// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 205;

ll a[MAXN][MAXN], tong[100005];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll m, n, res = 0, idx = 0;

    cin >> m >> n;

    for ( ll i = 1; i <= m; i++ ) {
        for ( ll j = 1; j <= n; j++ ) {
            cin >> a[i][j];
            tong[i] += a[i][j];
        }
    }

    for ( ll i = 1; i <= m; i++ ) {
        if ( tong[i] > res ) {
            res = tong[i];
            idx = i;
        }

    }

     for ( ll i = 1; i <= m; i++ ) {
        for ( ll j = 1; j <= n; j++ ) {
            if ( i == idx ) {
                cout << " ";
                break;
            }
            cout << a[i][j] << " ";
        }
        cout << '\n';
    }



	return 0;
}



