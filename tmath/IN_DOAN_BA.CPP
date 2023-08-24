#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MAXN = 1e6 + 5;


int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll a, b; cin >> a >> b;

    for ( ll i = b; i >= a; i--) cout << i << " ";

    return 0;

}

