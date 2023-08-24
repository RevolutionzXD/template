#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll n, res;

ll tong(ll c){
    ll f = 0;
    while(c != 0){
        f += c % 10;
        c /= 10;
    }
    return f;
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ifstream in("SO_NGUON.INP");
    ofstream out("SO_NGUON.OUT");
    in >> n;
    for (ll i = 1 ; i <= 100 ; i++){
        if (i == tong(n - i)){
        	res = n - i;
		}
    }
    out << res;
    return 0;
}
