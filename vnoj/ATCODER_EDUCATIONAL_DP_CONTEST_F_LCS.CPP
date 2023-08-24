// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define epb emplace_back
#define lwb lower_bound
#define upb upper_bound
#define fi first
#define se second
#define inf LLONG_MAX
using namespace std;
const ll MAXN = 1e6 + 5;
const ll INF = 1e15;

ll m, n;
string s,t;
int dp[3001][3001];




signed main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	cin >> s >> t;
	m = s.size();
	n = t.size();
	for ( ll i = 0; i <= m; ++i ) { 
		for ( ll j = 0; j <= n; ++j ) { 
		
			if ( i == 0 || j == 0 ) {
				dp[i][j] = 0;
			}
			
			else if ( s[i - 1] == t[j - 1] )
        		dp[i][j] = dp[i - 1][j - 1] + 1;
        		
      		else
        		dp[i][j] = max ( dp[i - 1][j], dp[i][j - 1] );
        		
		}
	}
	
	ll a = dp[m][n];
	char res[3001];
	res[a] = '\0';
	
	ll i = m, j = n;
  	while ( i > 0 && j > 0 ) {
    	if ( s[i - 1] == t[j - 1] ) {
      	res[a - 1] = s[i - 1];
      	i--;
      	j--;
      	a--;
    }

    else if ( dp[i - 1][j] > dp[i][j - 1] )
    	i--;
    	
    else
    	j--;
  	}
  	
  	cout << res;

	return 0;
	
}












