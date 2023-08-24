#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    vector<int> v;
    int n; cin >> n;
    
    for ( int i = 1; i <= n; ++i ) {
        int x; cin >> x;
        v.push_back(x);
    }
    
    sort( v.begin(), v.end() );
    
    for ( auto x : v ) cout << x << " ";
    
    
    return 0;
}
