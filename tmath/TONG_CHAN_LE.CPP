#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e5 + 5;

ll a[MAXN];
ll n, tc, tl;


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> n;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 1; i <= n; i++){
        if(a[i] % 2 == 0) tc += a[i];
        else tl += a[i];
    }
    cout << tc << '\n' << tl;
	return 0;
}


