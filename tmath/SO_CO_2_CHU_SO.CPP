#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const ll MAXN = 1e6 + 5;



int main () {
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    ll n, a;

    cin >> n;

    a = n % 10;

    n /= 10;

    cout << n << " " << a;


    return 0;

}


