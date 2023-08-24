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
const ll maxn = 100 + 5;
const ll maxk = 10000/4 + 5;


//---------Value---------//

ll N, K;
ll L, R;
ll a[maxn];
ll suma;
ll sol;
ll dp[maxn][maxn][maxk];
ll solL[maxn][maxk];

//-----------------------//






signed main() {
	faster
   	//freopen (".INP","r", stdin);
	//freopen (".OUT","w", stdout);
	
	
	cin >> N >> L >> R >> K;
    K = min( K, N * N / 4 + 2 );
    
    for ( ll i = 1; i <= N; ++i ) cin >> a[i];
    for ( ll i = L; i <= R; ++i ) suma += a[i];
    
    for ( ll i = L; i <= R; ++i ){
    	
        for ( ll j = L - 1; j > 0; --j ){
        	
            for ( ll k = 0; k <= K; ++k ){
            	
                dp[i][j][k] = max( dp[i][j][k], dp[i - 1][j][k] );
                dp[i][j][k] = max( dp[i][j][k], dp[i][j + 1][k] );
                
                ll cijena  = i - j;
                
                if ( k >= cijena ) dp[i][j][k] = max( dp[i][j][k], dp[i - 1][j + 1][k - cijena] + a[i] - a[j] );
                
            }
            
        }
        
    }
    

    for ( ll i = L - 1; i <= R; ++i )
        for ( ll j = 0; j <= K; ++j ) solL[i][j] = dp[i][1][j];
            

    memset( dp, 0, sizeof dp );
    

    for ( ll i = R; i >= L; --i ){
    	
        for ( ll j = R + 1; j <= N; ++j ){
        	
            for ( ll k = 0; k <= K; ++k ){
            	
                dp[i][j][k] = max( dp[i][j][k], dp[i + 1][j][k] );
                dp[i][j][k] = max( dp[i][j][k], dp[i][j - 1][k] );
                
                ll cijena = j - i;
                
                if ( k >= cijena ) dp[i][j][k] = max( dp[i][j][k], dp[i + 1][j - 1][k - cijena] + a[i] - a[j] );
                
            }
            
        }
        
    }
    
    

    for ( ll i = L - 1; i <= R; ++i )
        for ( ll j = 0; j <= K; ++j ) sol = max( sol, solL[i][j] + dp[i + 1][N][K - j] );

    cout << suma - sol << endl;
	

	return 0;
}


