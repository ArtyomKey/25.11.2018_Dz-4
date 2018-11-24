#include <iostream>

using namespace std;

struct answer{
  int x;
  int y;
};
int main(){
  answer resh;
  for(int i = 1; i <= 38873; i++){
    resh.y = i;
    resh.x = (78487894 - 2019 * i)/2018;
    cout << resh.x << " " << resh.y << "\n";
  }
}
/*сложность O(n)*/
