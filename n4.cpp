#include <iostream>

using namespace std;

int main(){
  int n, k;
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
        k += 1;
        if(k == n){
          break;
        }
      }
    }
  }
  for(int i = 2; i <= k; i ++){
      if(used[i] == 0){
        cout << i << " ";
      }
  }
}

/*Сложность O(n* ln n) */
