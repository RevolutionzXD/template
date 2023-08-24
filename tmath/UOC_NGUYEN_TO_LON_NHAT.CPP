#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6;

ll n, q, d[MAXN + 5], nt[MAXN + 5];

void sangnt() {
    for(ll i = 2; i <= sqrt(MAXN); i++){

    }
}

bool check(ll x) {
    for(ll i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}



int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n; cin >> n;
    if(check(n) && check(dao(n))) cout << 1;
    else cout << 0;
	return 0;
}



