// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;

string fibo[2000];

string operator + ( string a, string b ) {
	
	string c = "";
	
	while ( a.size() < b.size() ) a = "0" + a;
	while ( a.size() > b.size() ) b = "0" + b;
	
	ll tmp = 0, sm, ans;
	
	for ( ll i = a.size() - 1; i >= 0; i-- ) {
		
		sm = tmp + a[i] + b[i] - 96;
		tmp = sm / 10;
		ans = sm % 10;
		
		c = char ( ans + 48 ) + c;
	}
	if ( tmp == 1 ) c = "1" + c;
	return c;
	
}



int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	fibo[1] = fibo[2] = "1";
	for ( ll i = 3; i <= 1000; i++ ) fibo[i] = fibo[ i - 1 ] + fibo[ i - 2 ];
	
	ll t;
	while ( cin >> t ) {
		cout << fibo[t] << endl;
	}

	return 0;
}


