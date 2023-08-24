// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;


ll a[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, x, res = 1;

    cin >> n >> x;
    ll j = n - 1;

    for ( ll i = 1; i <= n - 1; i++ ) cin >> a[i];

    sort ( a + 1, a + n );

    while ( x < a[j]) {
        if ( x < a[j] ) res++;
        j--;

    }

    cout << res;

	return 0;
}



