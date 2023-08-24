#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll mid = 1e5 + 5;
ll n , d;
ll a[mid];

ll find(ll x , ll i){
	ll b = lower_bound(a + i , a + n + 1 , x) - a - i ;
	return b;
}

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ifstream in("TRIP.INP");
    ofstream out("TRIP.OUT");
    for(ll k = 1; k <= 10; k++){
        in >> n >> d;
        if(n == 0) return 0;
        ll res = 0;
        for (ll i = 1 ; i <= n ; i++){
            in >> a[i];
        }
        sort (a + 1 , a + n + 1);
        for (ll i = 1 ; i <= n ; i++){
            if (a[i] != 0){
                res++; a[find(d - a[i] , i)] = 0;
            }
            else continue;
        }
        out << res << '\n';
        n = 0;
    }
	return 0;
}



