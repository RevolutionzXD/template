#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int a[1005];
int n;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    
    cin >> n;
    for ( int i = 1 ; i <= n; ++i ) cin >> a[i];
    for ( int i = n; i > 0; --i ) cout << a[i] << " "; 
    
    return 0;
}
