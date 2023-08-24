#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MAXN = 1e5 + 5;

unordered_map <ll, ll> a;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ifstream in("BO_TOC.INP");
    ofstream out("BO_TOC.OUT");
    ll n, res = 0, x;
    in >> n;
    for(ll i = 1; i <= n; i++) {
        in >> x;
        a[x]++;
        //out << a[x] << " ";
    }
   for(ll i = 1; i <= n; i++) {
        res += a[i] / i;
    }
    out << res;
    return 0;
}
