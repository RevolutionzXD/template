// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;

queue <ll> q;
char c;

ll n, x;




int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> n;
	while ( n-- ) {
		cin >> c;
		
		if ( c == 'E' ) {
			cin >> x;
			q.push(x);
		}
		
		if ( c == 'D' ) {
			
			if ( !q.empty() ) {
				cout << q.front() << endl;
				q.pop();
			}
			
			else cout << -1 << endl;
			
		}
		
		if ( c == 'G' ) {
			
			if ( !q.empty() ) {
				cout << q.front() << endl;
			}
			
			else cout << -1 << endl;
		}
		
	}
	
	while ( !q.empty() ) {
		cout << q.front() << " ";
		q.pop();
	}
	return 0;
}


