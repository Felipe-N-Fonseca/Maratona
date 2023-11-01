#include <bits/stdc++.h>
using namespace std; 

int main(){
    char L;
    float M = 0;
    float tmp;

    cin >> L;
    for(int c = 0; c < 144; c++){
        cin >> tmp;
        if((c >= 1 && c <= 11) || (c >= 14 && c <= 23) || (c >= 27 && c <= 35) || (c >= 40 && c <= 47) || (c >= 53 && c <= 59) || (c >= 66 && c <= 71) || 
        (c >= 79 && c <= 83) || (c >= 92 && c <= 95) || (c >= 105 && c <= 107) || (c >= 118 && c <= 119) || (c == 131)){
            M += tmp;
        }
    }

    if(L == 'M') M /= 66;
    cout << fixed << setprecision(1) << M << endl;

    return 0;

}
