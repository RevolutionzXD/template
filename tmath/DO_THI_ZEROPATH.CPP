#include <bits/stdc++.h>
#define ll long long
using namespace std;
const ll MAXN = 1e6 + 5;

ll n;
ll d[100005];
vector <ll> ans;

void dfs ( ll u )
{
  //  cout<<endl<<"u="<<u<<endl;
    int v;
    for ( ll i = 1; i <= sqrt(u); i++ )
    {
        if ( u % i == 0 )
        {
           // cout<<"i= "<<i<<endl;
            v = ( i - 1 ) * ( u / i + 1 );
           // cout<<v<<" ";
            if ( d[v] == 0 )
            {
                d[v] = 1;
                dfs(v);
            }
        }
    }

}
int main() {
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    //freopen("ZEROPATH.inp","r",stdin);
    //freopen("ZEROPATH.out","w",stdout);
    cin >> n;
    d[0] = 1; d[n] = 1;
    dfs(n);
    for ( ll i = 0; i <= n; i++ )
		if ( d[i] == 1 ) ans.push_back(i);
    cout << ans.size() - 1 << endl;
    for ( ll i = 0; i < ans.size() - 1; i++) cout << ans[i] << " ";
    
    return 0;
}