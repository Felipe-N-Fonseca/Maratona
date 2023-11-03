#include <bits/stdc++.h>
using namespace std;

int mdc(int a, int b){
    if(b == 0) return a;
    return mdc(b, a % b);
}


int main(){
    int n, f1, f2;

    cin >> n;
    for(int c = 0; c < n; c++){
        cin >> f1 >> f2;
        if(f1 > f2) cout << mdc(f1, f2) << endl;
        else cout << mdc(f2, f1) << endl;
    }

    return 0;
}
