#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e5 + 5;

ll a[MAXN];
ll res;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	ll n;
    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    res = 10000000;
    for(ll i = 1; i <= n; i++){
        if(a[i] % 2 != 0){
            res = min(res, a[i]);
        }
    }
    cout << res;
	return 0;
}


