// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll a[MAXN];

bool check ( ll x ) {

    while ( x > 0 ) {
        if ( x % 10 == 6 ) return true;
        x /= 10;
    }

    return false;
}


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, dem = 0;

    cin >> n;

    for ( ll i = 1; i <= n; i++ ) cin >> a[i];

    for ( ll i = 1; i <= n; i++ ) {
        if (check( a[i] )) dem++;
    }

    cout << dem;

	return 0;
}



