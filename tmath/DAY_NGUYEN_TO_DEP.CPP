#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e7;

ll a[MAXN + 5] = { 0 }, prime[MAXN + 5];

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
	ll n, a, res = 0;
	sieve();
    cin >> n;
    bool check = true;
    for(ll i = 1; i <= n; i++) {
        cin >> a;
        if(!prime[a]){
            if(!prime[i]) check = false;
            else res++;
        }
    }
    if(check) cout << "GOOD";
    else cout << res;
	return 0;
}



