#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;

ll a[MAXN], pre[MAXN];
pair <ll, ll> ans;
unordered_map <ll, ll> pos;
ll n;

void prefix_sum() {
    for(ll i = 1; i <= n; i++){
        pre[i] = pre[i - 1] + a[i];
    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //ifstream in("SZERO.INP");
    //ofstream out("SZERO.OUT");
    ll l , r, res = 0;
    cin >> n;
    for(ll i = 1; i <= n; i++) {
        cin >> a[i];
    }
    prefix_sum();
    pos[0] = 0;
    for(ll i = 1; i <= n; i++){

    }

    cout << ans.first << " " << ans.second;
	return 0;
}


