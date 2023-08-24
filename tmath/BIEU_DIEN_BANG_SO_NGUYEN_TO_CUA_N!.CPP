#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;

ll nt[MAXN], b[MAXN];


void sang() {
    memset(nt, true, sizeof(nt));
    nt[0] = nt[1] = false;
    for(ll i = 1; i <= sqrt(MAXN); i++) {
        if(nt[i]) {
            for(ll j = i * i; j <= MAXN; j += i) nt[j] = false;
        }
    }
}

ll somu( ll x, ll y ) {
    ll res = 0;
    ll mu = y;

    while (x / mu > 0) {
        res += x / mu;
        mu *= y;
    }
    return res;
}



void phantich(ll n) {
    for(ll i = 2; i <= n; ++i) if(nt[i]) cout << somu(n, i) << " ";
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n, t;

    sang();

    while ( cin >> t) {
        phantich(t);
    }

    return 0;
}
