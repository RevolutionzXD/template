#include <bits/stdc++.h>
using namespace std;
int a[1000];
int b[1000] = { 0 };
int n;
void result(){
    for(int i = 1; i <= n; i++){
        cout << a[i]<<" ";
    }
    cout << endl;
}
void hoanvi(int k){
   for (int i = 1; i <= n; i++) {
        if (b[i] == 0) {
            a[k] = i;
            b[i] = 1;
            if (k == n)result();
            else
                hoanvi(k + 1);
            b[i] = 0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cout << "Nhap n: ";
    cin >> n; cout << '\n';
    system("color 0A");
    hoanvi(1);
}
