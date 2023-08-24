#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll a[100005], l, r, sum;


bool check(ll i){
    ll tong = 0;
    for(ll j = 2; j * j <= i; j++){
        if(i % j == 0 && i / j != j) tong += j + i / j;
        if(i % j == 0 && i / j == j) tong += j;
    }
    
    if(tong + 1 > i) return true;
    return false;
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    //ifstream in("SOPHONGPHU.inp");
    //ofstream out("SOPHONGPHU.out");

    cin >> l >> r;
    for(ll i = l; i <= r; i++){
        if(check(i)) sum++;
    }
    cout << sum;
    return 0;
}
