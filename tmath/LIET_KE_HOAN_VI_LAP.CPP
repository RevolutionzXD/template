// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 10;

ll a[MAXN], x[MAXN], n, dem = 0;

void backtrack ( ll i ) {

    for ( ll j = 1; j <= n; j++ ) {
        if ( a[j] ) {

            a[j]--;
            x[i] = j;
            if ( i == n ) {

                dem++;

                for ( ll i = 1; i <= n; i++ ) cout << x[i] << " ";
                cout << endl;

            }

            else backtrack ( i + 1 );

            a[j]++;

            if ( dem == 1e5 )
                exit (0);
        }
    }
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	cin >> n;
	for ( ll i = 1; i <= n; i++ ) cin >> a[i];

	backtrack (1);

	return 0;
}





