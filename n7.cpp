#include <iostream>

using namespace std;

int countTwo(const int n, const int temp){
  int digit, otv, A;
  otv = 0;
  while(A != 0){
    digit = A % 3;
    if(digit == 2){
      otv++;
    };
    A /= 10;
  };
  return otv;
}
int main(){
  int n, k, otv;
  cout << "Количество чисел?";
  cin >> n;
  int A[n];
  for(int i = 0; i < n; i++){
    cout<<" число " << i + 1 << "?";
    cin >> A[i];
    }
  for(int i = 0; i < n; i++){
    cout << "Ответ " << i+1 << ": " << countTwo(n, A[i]) << "\n"; 
  }
}
/*так как получение в третичной записи числа 2 случайно, то приходится прибегать к перебору цифр третичной записи числа, и сложность = O(n)*/
