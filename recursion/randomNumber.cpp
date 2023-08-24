#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll MAXN = 1e8;

ll a[MAXN], n;

void result(int n){
    for(int i = 1; i <= n; i++) cout << rand()%9;
}
void nhiphan(int i){
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
// attention: n <= 32376

