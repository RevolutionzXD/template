#include <bits/stdc++.h>
using namespace std;
long long n, q;
int ketqua;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    // Nhap so luong phan tu cua mang va so truy van
    cin >> n >> q;
    int a[n + 7], L[q + 7], R[q + 7];
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    // Sap xep mang
    sort(a + 1, a + n + 1);
    // Nhap gia tri moi truy van
    for(int i = 1; i <= q; i++){
        cin >> L[i] >> R[i];
    }
    for(int i = 1; i <= q; i++){
        // Tim kiem vi tri dau tien
        int l = 1, r = n;
        while(l <= r){
            int mid = (l + r) / 2;
            if(a[mid] >= L[i]) r = mid - 1;
            else l = mid + 1;
        }
        // Tim kiem vi tri ket thuc
        int posL = r + 1;
        l = 1, r = n;
        while(l <= r){
            int mid = (l + r) / 2;
            if(a[mid] <= R[i]) l = mid + 1;
            else r = mid - 1;
        }
        int posR = l - 1;
        // In ket qua
        ketqua = posR - posL + 1;
        cout << ketqua << '\n';
    }
    return 0;
}
