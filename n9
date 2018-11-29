#include <iostream>
#include <math.h>
using namespace std;

const int prime_test(const int a){
    const int m = sqrt(a);
    if (a<=3){
        return 1;
    }
    
    if (a%2==0){
        return 2;
    }
     
    for(int i = 3; i <= m; i+=2){
        if (a%i==0) {
            return 2;
        }
    }
    
    return 1;
}
int main(){
  int n;
  cin >> n;
  bool *used = new bool (n+1);
    used[0] = 0;
    used[1] = 1;
    for(int i = 2; i <= n ; i++){
      used[i] = 1;
    }
    for(int i = 2; i <= n; i++){
      if(used[i]){
        for(int j = i*2; j <= n; j += i){
          used [j] = 0;
        }
     }
    }
    for(int i = 2; i <= n; i ++){
      if(used[i]){
        if(prime_test(i) == 1){
          if(prime_test(2*i+1) == 1){
            cout << i << " ";
          } 
        }
      }
    }
}
