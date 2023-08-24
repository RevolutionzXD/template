#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MAXN = 1e6;

ll a[MAXN], n;

void result(ll n){
    for(ll i = 1; i <= n; i++) cout << a[i];
    cout<<endl;
}
void nhiphan(ll i){
    for(int j = 0; j <= n; j++){
        a[i] = j;
        if(i == n)result(i);
            else nhiphan(i + 1);
    }
}
int main(){
    cin >> n;
    system("color 0A");
    nhiphan(1);
}

