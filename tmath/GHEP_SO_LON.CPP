#include <bits/stdc++.h>
using namespace std ;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	string s[105] ;
	ll n = 1 ;

	while (cin >> s[n]){
		n++ ;
	}

	for (ll i = 1 ; i < n - 1 ; i++){
		for (ll j = i + 1 ; j <= n - 1 ; j++){
			if (s[i] + s[j] < s[j] + s[i]) swap(s[i] , s[j]) ;
		}
	}
	for (ll i = 1 ; i <= n - 1 ; i++){
		cout << s[i] ;
	}
	return 0 ;
}

