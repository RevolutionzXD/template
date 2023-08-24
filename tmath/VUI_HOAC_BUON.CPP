#include <bits/stdc++.h>

using namespace std;
#define int unsigned long long
const int Sz = 1e6 + 5;
const int MOD = 4294967296;

int n;

struct Matrix{
    int a[2][2] = {{0, 0}, {0, 0}};
    Matrix operator *(const Matrix& other) const{
        Matrix product;
        for(int i = 0; i <= 1; i++){
            for(int j = 0; i <= 1; j++){
                for(int k = 0; k <= 1; k++){
                    product.a[i][k] = (product.a[i][k] + a[i][j] * other.a[j][k]) % MOD;

                }
            }
        }
        return product;
    }
};

Matrix expo_power(Matrix a, long long n){
    Matrix res;
    res.a[0][0] = res.a[1][1] = 1;
    while(n) {
        if(n % 2) res = res * a;
        n >>= 1;
        a = a * a;
    }
    return res;
}

int32_t main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

    cin >> n;

    Matrix s;
    s.a[0][0] = 20;
    s.a[0][1] = 6;
    s.a[1][0] = 7;
    s.a[1][1] = 19;

    cout << expo_power(s, n).a[1][1];
}
