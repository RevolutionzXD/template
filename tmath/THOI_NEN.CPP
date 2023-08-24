// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll a[MAXN];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, res = 0;

    cin >> n; ll x = n;
    for ( ll i = 1; i <= n; i++ ) cin >> a[i];

    sort ( a + 1, a + n + 1);

    while ( a[x] == a[n] ) {
        res++;
        x--;
    }

    cout << res;

	return 0;
}



