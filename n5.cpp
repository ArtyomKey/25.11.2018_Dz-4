#include <iostream>

using namespace std;

int mult(const int n, const int k, const int temp){
  int digit, otv, A;
  otv = 1;
  A = temp;
  while(A != 0){
    digit = A % 10;
    if(digit != 0){
      otv *= digit;
    };
    A /= 10;
  };
  if(otv > k){
    return temp;
  }
  return 0;
}

int main(){
  int n, k, otv;
  cout << "Количество чисел?";
  cin >> n;
  cout << "Больше какого числа должно быть?";
  cin >> k;
  int A[n];
  for(int i = 0; i < n; i++){
    cout<<" число " << i + 1 << "?";
    cin >> A[i];
    }
  cout << "Ответ: "; 
  for(int i = 0; i < n; i++){
    otv = mult(n, k, A[i]);
    if(otv){
    cout << otv << " ";
    }
  }
  cout << "\n"; 
}
/*Так как нулевая цифра может выпасть случайным образом, то можно только перебрать все цифры введённого числа,
поэтому Сложность O(n)*/
