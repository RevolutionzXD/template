#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;

ll a[MAXN];


int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, res = 0;

    cin >> n;

    for ( ll i = 1; i <= n; i++ ) cin >> a[i];

    for (ll i = n; i >= 2; i--)
    for (ll j = 1; j < i; j++)
        if ( a[j] > a[j+1] ) {
            swap(a[j],a[j+1]);

            for ( ll i = 1; i <= n; i++ ) cout << a[i] << " ";
            cout << '\n';

        }
    return 0;

}
