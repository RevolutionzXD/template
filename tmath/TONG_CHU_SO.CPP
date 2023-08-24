#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MAXN = 1e6 + 5;


int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, res = 0; cin >> n;

    while ( n > 0 ) {
        res += n % 10;
        n /= 10;
    }

    cout << res;

    return 0;

}

