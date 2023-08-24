#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;

ll a[MAXN];

ll tong(ll x) {
    ll res = 0;
    while(x != 0) {
        res += x % 10;
        x /= 10;
    }
    return res;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, t; cin >> n;
    while(n--){
        ll dem = 0;
        cin >> t;
        for(ll j = 1000; j <= 9999; j++) if(tong(j) == t) dem++;
        cout << dem << '\n';
    }
	return 0;
}
