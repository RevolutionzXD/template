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

    for( ll i = 1; i <= n ; i++ ){
        for( ll j = i + 1; j <= n; j++ ){
            if(a[i] > a[j]) {
                swap(a[i], a[j]);
                res++;
            }

        }
    }

    cout << res;

    return 0;

}
