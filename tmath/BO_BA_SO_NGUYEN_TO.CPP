#include <bits/stdc++.h>
#define ll long long
using namespace std;



bool check(ll x) {
    for(ll i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

void sieve() {
    prime[0] = prime[1] = 1;

    for(ll i = 2; i <= MAXN; i++){
        if(!prime[i]) {
            for(ll j = i * i; j <= MAXN; j += i) prime[j] = 1;
        }
    }
}


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	sieve();

    ll n; cin >> n;

    for(ll j = 3; j <= sqrt(n - 4); j++) {
        if(check[j]){

        }
    }
	return 0;
}











