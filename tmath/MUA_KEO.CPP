// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;

pair < ll, ll > a[MAXN];





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll s, n, res = 0, ind = 1;

    cin >> s >> n;
    for ( ll i = 1; i <= n; i++ ) cin >> a[i].first >> a[i].second;

    sort ( a + 1, a + n + 1 );


    while ( ind <= n && s - a[ind].first > 0 ) {
        s -= a[ind].first;
        res++;
        a[ind].second--;
        if ( a[ind].second == 0 ) ind++;

    }



    cout << res;

	return 0;
}



