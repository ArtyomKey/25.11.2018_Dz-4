#include <iostream>
using namespace std;

int gcd (int a, int b) {
    while (a!=0 && b!=0) {
        if (a>b) {
            a=a%b;
        }
        else b=b%a;
    }
    return a+b;
}
int main(){
  int n, otv;
  cin >> n;
  otv = 0;
  for(int i = 1; i < n; i++){
    if(gcd(n, i) == 1){
      otv++;
    }
  }
  cout << otv;
}
