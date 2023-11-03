#include <bits/stdc++.h>
using namespace std;

int fib(int* p, int x){
    (*p)++;
    if(x == 0) return 0;
    else if(x == 1) return 1;
    return fib(p, x-1) + fib(p, x-2);
}

int main(){
    int n, x, z, p;
    cin >> n;
    for(int c = 0; c < n; c++){
        p = 0;
        cin >> x;
        z = fib(&p, x);
        cout << "fib(" << x << ") = " << --p << " calls = " << z << endl;
    }
}
