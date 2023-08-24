#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

vector<int> v[100005];
int n, q;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    cin >> n >> q;
    for ( int i = 0; i < n; ++i ){
        int u; cin >> u;
        while( u-- ){
            int x; cin >> x;
            v[i].push_back(x);
        }
    }
    while( q-- ){
        int x, y; cin >> x >> y;
        cout << v[x][y] << endl;
    }
    
    return 0;
}
