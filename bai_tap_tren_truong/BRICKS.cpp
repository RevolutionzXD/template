#include <bits/stdc++.h>
using namespace std;

int a, x1, x2;
int m, n, g, y, S, P, X;
int giaiPT(float a, float b, float c,float m, float n){
    float delta = b*b - 4*a*c;
    if(delta<0){
        m = n =0.0;
        return 0;
    }
    else if(delta==0){
        m = n = -b/(2*a);
        return 1;
    }
    else{
        delta = sqrt(delta);
        m = (-b + delta) / (2*a);
        n = (-b - delta) / (2*a);
        return 2;
    }
}

int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    ifstream in("BRACKET.inp");
    ofstream out("BRACKET.out");
    in >> g >> y;
    S = (g / 2) + 2;
    P = y + g;
    //pow(X, 2) - S * X + P = 0;
    giaiPT(1, -S, P, m, n);
    out << m << n;
    return 0;
}






