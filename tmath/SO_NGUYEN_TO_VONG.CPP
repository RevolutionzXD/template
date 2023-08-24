#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e6 + 5;

bool nt[MAXN];

void sang() {
    memset(nt, true, sizeof(nt));
    nt[0] = nt[1] = false;
    for(ll i = 1; i <= sqrt(MAXN); i++) {
        if(nt[i]) {
            for(ll j = i * i; j <= MAXN; j += i) nt[j] = false;
        }
    }
}

ll dao(ll x) {
    ll k = log10(x); // Lay so chu so cua x
    if(k == 0) return x;
    ll a = x % 10, b = x / 10; // 123 ---> 3*10^2 + 12 = 312
    ll s = a * pow(10, k) + b; // dao cuoi len dau
    return s;
}

bool check(ll x) { // Kiem tra x co phai la so nguyen to vong hay khong
    ll dem = 0;
    while(dem <= 10) {
        if(!nt[x]) return false;
        x = dao(x);
        dem++;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    sang();
    ll n, res = 0;
    cin >> n;
    for(ll i = 1; i <= n; i++){
        if(check(i)) res++;
    }
    cout << res;
}
