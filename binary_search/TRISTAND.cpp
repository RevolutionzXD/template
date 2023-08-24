#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+8;
long long  n,q,p,a[N],x[N],y[N],b[N],ds;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cin >> n;
	for(int i = 1; i <= n ;i++)
    {
        cin >> x[i] >> y[i];
        a[i] = x[i];
        b[i] = y[i];
    }

    sort (a + 1, a + n + 1);
    sort (b + 1, b + n + 1);

    for(int i = 1 ; i <= n ; i++ )
    {
         p = upper_bound(a+1,a+n+1,x[i]) - lower_bound(a+1,a+n+1,x[i]) - 1; // tung do
         q = upper_bound(b+1,b+n+1,y[i]) - lower_bound(b+1,b+n+1,y[i]) - 1; // hoanh do
         ds += p*q;
    }

    cout << ds;

	return 0;
}



