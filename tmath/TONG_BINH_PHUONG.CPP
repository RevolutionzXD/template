// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;


ll a[MAXN];


int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n , res = 0 , res1, res2;

    cin >> n;
    for ( ll i = 1; i <= n; i++ ) cin >> a[i];

    sort ( a + 1, a + n + 1 );

    res1 = max ( abs(a[1]), max ( abs(a[2]), max ( abs(a[n]), max (abs(a[n - 1])))));

    if ( res1 == abs(a[1])) res2 =  max ( abs(a[2]), max ( abs(a[n]), max (abs(a[n - 1]))));

    if ( res1 == abs(a[2])) res2 =  max ( abs(a[1]), max ( abs(a[n]), max (abs(a[n - 1]))));

    if ( res1 == abs(a[n])) res2 =  max ( abs(a[1]), max ( abs(a[2]), max (abs(a[n - 1]))));

    if ( res1 == abs(a[n - 1])) res2 =  max ( abs(a[1]), max ( abs(a[n]), max (abs(a[2]))));

    res = pow ( res1, 2 ) + pow ( res2, 2 );

    cout << res;

	return 0;
}



