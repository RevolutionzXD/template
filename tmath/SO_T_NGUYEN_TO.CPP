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

    ll a, dem;

    cin >> a;

    for ( ll i = 2; i * i <= a; i++ ) {
        if ( check (i) ) dem++;
    }

    cout << dem;

	return 0;
}





