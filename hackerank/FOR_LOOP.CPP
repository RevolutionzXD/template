#include<bits/stdc++.h>
using namespace std;


string s[10] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };


signed main(){
    int a, b; cin >> a >> b;
    for ( int i = a; i <= b; ++i ) {
        if( i <= 9 ) cout << s[i] << endl;
        else if( i & 1 ) cout << "odd" << endl;
        else cout << "even" << endl;
    }
}
