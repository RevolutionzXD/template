#include <bits/stdc++.h>
#define ll long long
using namespace std;

int a[1000];
int b[1000] = { 0 };
int n, h;

void result(){
    for(int i = 1; i <= h; i++){
        cout << a[i] << " ";
    }
    cout << endl;
}
void chinhhop(int k){
   for (int i = 1; i <= n; i++) {
        if (b[i] == 0) {
            a[k] = i;
            b[i] = 1;
            if (k == h)  result();
            else
                chinhhop(k + 1);
            b[i] = 0;
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cout << "Nhap n: ";
    cin >> n >> h;
    system("color 0A");
    chinhhop(1);
}
