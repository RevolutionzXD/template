// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>

using namespace std;

#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
#define faster ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);


const ll MAXN = 1e6 + 5;
const ll MOD = 1e9 + 6;


//---------Value---------//

string s;
bool a, b, c, d, e, f;

//-----------------------//


bool check( char x ) {
	
	string ex =  "!@#$%^&*()-+";
	for ( auto i : ex ) if ( x == i ) return true;
		
	return false;

}



signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> s;
	
	a = b = c = d = e = false;
	f = true;
	
	if ( s.size() >= 8 ) a = true;
	
	for ( int i = 0; i < s.size(); ++i ) {
		
		if ( isupper(s[i]) ) b = true;
		if ( islower(s[i]) ) c = true;
		if ( isdigit(s[i]) ) d = true;
		if ( check(s[i]) ) e = true;
		if ( i != s.size() - 1 && s[i] == s[ i + 1 ] ) f = false;
		
	}
	
	if ( a && b && c && d && e && f ) cout << "YES";
	else cout << "NO";

	return 0;
}


