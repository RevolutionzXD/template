// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll MAXN = 15;


ll a[MAXN], c[MAXN], n, k, dem;
ll fac[21];

void tinhgiaithua()
{
    fac[0] = 1;
    for ( ll i = 1; i <= 20; i++ )
        fac[i] = fac[i - 1] * i;
}

void print () {
    for ( ll i = 1; i <= k; i++ )  cout << a[i] << " ";
    cout << endl;
    dem++;
}

void Try ( ll i ) {
    for ( ll j = i; j <= n; j++ ) {
        if ( c[j] == 0 && j > a[i - 1]) {

            a[i] = j;
            c[j] = 1;

            if ( i == k ) print();
            else Try ( i + 1);

            c[j] = 0;
        }

    }
}

int main() {
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

	tinhgiaithua();

	cin >> n >> k;

	cout << fac[n] / fac[k] / fac[n - k] << "\n";

	sort ( c + 1, c + n + 1 );

	Try (1);

	return 0;
}


