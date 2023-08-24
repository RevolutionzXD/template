#include <bits/stdc++.h>
#define ll long long
using namespace std;



bool check(ll x) {
    for(ll i = 2; i * i <= x; i++){
        if(x % i == 0) return false;
    }
    return true;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ll a, b; cin >> a >> b;
    ll s = a + b, c = s;
    while(!check(s)) s++;
    cout << s - c;

	return 0;
}




