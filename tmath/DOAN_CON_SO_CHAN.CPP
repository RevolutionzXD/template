// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

ll a[MAXN], b[MAXN];



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll n, res = 1;

	cin >> n;
	for ( ll i = 1; i <= n; i++ ) cin >> a[i];

    for ( ll l = 1, r = 1; r <= n; r++ ) {

        res++;
        while ( a[r] % 2 != 0 ) {
            l++;
        }
        res = max ( res, r - l + 1 );

    }


	cout << res;

	return 0;
}


