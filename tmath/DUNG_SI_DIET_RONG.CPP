// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

pair <ll, ll> a[MAXN];





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	ll s, n, res = 0;

	cin >> s >> n;

	for ( ll i = 1; i <= n; i++ ) cin >> a[i].first >> a[i].second;

	sort ( a + 1, a + n + 1 );

	for ( ll i = 1; i <= n; i++ ) {
        if ( s > a[i].first ) {
            s += a[i].second;
            res++;
        }
        else break;
	}

	if ( res == n ) cout << "YES";
	else cout << "NO";

	return 0;
}



