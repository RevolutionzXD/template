#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;

ll x[MAXN], a[MAXN], b[MAXN];
ll t, res;

bool primeNumber(ll k) {
    ll dem1 = 0;
    for(ll i = 1; i * i <= k; i++){
        if(k % i == 0) dem1++;
    }
    if(dem1 != 2) return false;
    else return true;
}

bool uoc(ll i){
    ll dem = 0;
    for(ll j = 1; j <= t; j++){
        if(i % j == 0 && j != i / j) dem += 2;
        else dem++;
    }
    if(primeNumber(dem)) return true;
    else return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> t;
    for(ll s = 1; s <= t; s++) cin >> a[s] >> b[s];
    for(ll s = 1; s <= t; s++){
        for(ll i = a[s]; i <= b[s]; i++){
            if(uoc(i) == true) res++;
        }
        cout << res;
    }
    return 0;
}

