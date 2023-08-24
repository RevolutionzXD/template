#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#define ll long long 
using namespace std;
const ll MAXN = 1e5 + 5;
 
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    ll a[MAXN];
    
    ll n; cin >> n;
    for ( ll i = 1; i <= n; ++i ) cin >> a[i];
    
    ll q; cin >> q;
    
    while( q-- ) {
        ll x; cin >> x;
        
        ll k = lower_bound( a + 1, a + n + 1, x ) - a;
        
        if ( a[k] == x ) cout << "Yes" << " " << k << endl;
        else cout << "No" << " " << k << endl;
    }
    
    return 0;
}
