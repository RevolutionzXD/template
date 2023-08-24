// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;

bool visited[MAXN];
vector adj[MAXN];
ll a[MAXN];


ll n, m;


void input() {
	
	cin >> n >> m;
	for ( ll i = 1; i <= n; i++ ) 
		for ( ll j = 1; j <= m; j++ ) cin >> a[i][j];
		
	memset ( visited, false, sizeof ( visited) );
}

void dfs ( ll u ) {
		
	if ( a[n][m] == 1 || a[1][1] == 1 ) {
		cout << -1;
		return 0;
	}

	
	visited[1][1] = true;
	for ( ll k = )
}





int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	input();
	


	return 0;
}


