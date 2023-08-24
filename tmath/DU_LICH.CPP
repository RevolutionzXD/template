// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 25;

ll n, k, a[MAXN][MAXN], res = 0;
ll s[MAXN];





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n >> k;

    for ( ll i = 1; i <= n; i++ )
        for ( ll j = 1; j <= n; j++ )
            cin >> a[i][j];

    for ( ll i = 1; i <= n; i++ ) s[i]= i;

    do {

        ll sum = a[1] [s[2]] + a[s[n]] [1];
        for ( ll i = 2; i < n; i++ )
            sum += a[s[i]] [s[ i + 1 ]];

        if ( sum == k ) res++;

    }

    while ( next_permutation ( s + 2, s + n + 1 ));
    cout << res;

	return 0;
}



