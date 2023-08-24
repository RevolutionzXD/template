#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e7 + 5;







int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll a, b, c, d, res; cin >> a >> b >> c >> d;

    if ( c > b || a > d ) {

        cout << 0;
        return 0;

    }

    else

        if ( a <= c && c <= b && b <= d ) {

            cout << b - c + 1;
            return 0;

        }

        if ( a <= c && c <= b && b > d ) {

            cout << d - c + 1;
            return 0;

        }

        if ( c <= a && a <= d && d <= b ) {

            cout << d - a + 1;
            return 0;

        }

        if ( c <= a && a <= d && d > b ) {

            cout << b - a + 1;
            return 0;

        }


    return 0;
}
