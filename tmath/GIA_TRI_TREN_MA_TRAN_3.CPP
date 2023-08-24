// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e3 + 5;

int a[1005][1005];
pair <int, int> b[2000005];

int m, n, t;




int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	 cin >> m >> n >> t;
	for ( int i = 1; i <= m; i++ ) 
		for ( int j = 1; j <= n; j++ ) {
			cin >> a[i][j];
			if ( b[ a[i][j] ].first == 0 && b[ a[i][j] ].second == 0 ) {
				b[ a[i][j] ].first = i;
				b[ a[i][j] ].second = j;
			}
			
		}
		
	while ( t-- ) {
		int x; cin >> x;
		if ( b[x].first == 0 && b[x].second == 0 ) cout << -1 << endl;
		else cout << b[x].first << " " << b[x].second << endl;
	}
		

	

	return 0;
}