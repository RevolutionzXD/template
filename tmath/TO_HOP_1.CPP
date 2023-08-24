// Nguyen Thien Nhan (Revolution)
#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll fac[21];

void tinhgiaithua()
{
    fac[0] = 1;
    for ( ll i = 1; i <= 20; i++ )
        fac[i] = fac[i - 1] * i;
}

int main() {

    tinhgiaithua();
    ll Q, n, k;
    cin >> Q;
    while ( Q-- )
    {
        cin >> n >> k;
        cout << fac[n] / fac[k] / fac[n - k] << "\n";
    }

}


