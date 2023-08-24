#include <bits/stdc++.h>
using namespace std;
using ll = long long;

float a, b, N, c;
ll res;


int main(){
	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ifstream in("BE_HOC_TOAN.INP");
    ofstream out("BE_HOC_TOAN.OUT");
    in >> a >> b >> N;
    c = (a / b) * pow(10, N);
    c = (int)(c);
    for(ll i = 1; i <= N; i++){
        res += (c % 10);
        c /= 10;
    }
    out << res;

	return 0;
}



