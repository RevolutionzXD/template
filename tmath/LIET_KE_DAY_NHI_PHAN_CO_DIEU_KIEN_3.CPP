#include <bits/stdc++.h>
using namespace std;
#define ll long long
int x1[25], x2[25];
int n;
int cnt = 0;

bool check(){
	for (int i = 1; i < n; i++){
		if (x1[i] == 1 && x1[i + 1] == 1) return false;
	}
	return true;
}

void dem(){
	if (check())
		cnt++;
}
void print(){
	for (int i = 1; i < n; i++){
		if (x2[i] == 1 && x2[i + 1] == 1) return;
	}
	for (int i = 1; i <= n; i++) cout << x2[i];
	cout << "\n";
}
void Try1(int i){
	for (int j = 0; j <= 1; j++){
		x1[i] = j;
		if (i == n) dem();
		else Try1(i + 1);
	}
}
void Try2(int i){
	for (int j = 0; j <= 1; j++){
		x2[i] = j;
		if (i == n) print();
		else Try2(i + 1);
	}
}
int main(){
    ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
    cin >> n;
    Try1(1);
    cout << cnt << "\n";
    Try2(1);
}
