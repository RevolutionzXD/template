#include <bits/stdc++.h>
#define ll long long
using namespace std;



bool check(ll x) {
    for(ll i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

ll dao(ll x) {
    ll tam = 0;
    while(x > 0) {
        tam = tam * 10 + x % 10;
        x = x / 10;
    }
    return tam;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll n; cin >> n;
    if(check(n) && check(dao(n))) cout << 1;
    else cout << 0;
	return 0;
}


