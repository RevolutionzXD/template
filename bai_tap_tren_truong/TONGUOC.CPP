#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MAXN = 1e5 + 5;
ll a[MAXN], x, n, res;

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //ifstream in("TONGUOC.INP");
    //ofstream out("TONGUOC.OUT");
    cin >> n >> x;
    for(ll i = 1; i <= n; i++) cin >> a[i];
    for(ll i = 1; i <= n; i++) if(x % a[i] == 0) res += a[i];
    cout << res;
    return 0;
}
