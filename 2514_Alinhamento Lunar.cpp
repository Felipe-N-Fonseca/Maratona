#include <bits/stdc++.h>
using namespace std;

int main(){
    int x, l1, l2, l3, M, m;

    while(cin >> x){
        cin >> l1 >> l2 >> l3;
        M = max(max(l1, l2), l3);
        m = M;
        while((M%l1 != 0) || (M%l2 != 0) || (M%l3 != 0)){
            M += m;
        }
        cout << M - x << endl;
    }
    return 0;
}