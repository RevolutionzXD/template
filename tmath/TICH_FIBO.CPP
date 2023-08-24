#include <bits/stdc++.h>
using namespace std;
using usll = unsigned long long;

const usll MAXN = 1e8;

usll b[MAXN];

void fibo(){
    b[1] = b[2] = 1;
    for(usll i = 3; i <= MAXN; i++) b[i] = b[i - 1] + b[i - 2];
}

signed main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    fibo();

    usll x;

    while ( cin >> x ) {
        cout << b[x] << '\n';
    }

    return 0;
}

