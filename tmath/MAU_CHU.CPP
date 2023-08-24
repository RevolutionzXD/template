#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 1e5 + 5;

string s, c;
ll k;


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
	s = "TINHOCTREQUYCHAU";
	c = "BRWY";
	for(ll i = 1; i <= 20; i++) {
        s += s;
        c += c;
	}
    cin >> k;
    cout << s[k - 1] << "-";
    if(c[k - 1] == 'B') cout << "Blue";
    if(c[k - 1] == 'R') cout << "Red";
    if(c[k - 1] == 'W') cout << "White";
    if(c[k - 1] == 'Y') cout << "Yellow";
	return 0;
}



