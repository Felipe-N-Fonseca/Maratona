#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  string a, b;

  cin >> n;
  for(int i = 0; i < n; i++){
    cin >> a >> b;
    if(a.length()<b.length()){
      cout << "nao encaixa\n";
      continue;
    }else{
      int c;
      for(c = 0; c < b.length(); c++){
        if(a[a.length()-c-1] != b[b.length()-c-1]){
          cout << "nao encaixa\n";
          break;
        }
      }
      if(c == b.length()){
        cout << "encaixa\n";
      }
    }
  }
  return 0;
}