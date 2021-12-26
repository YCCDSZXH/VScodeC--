#include <iostream>
using  namespace std;
int ans = 0;
int divideCnt(int sum){

  if (sum == 0){
    ans ++;
    return 0;
  }
  if (sum < 0){
    return 0;
  }
  divideCnt (sum - 5);
  divideCnt (sum - 3);
  divideCnt (sum - 1);
  return ans;



}

int main (){
  int a;
  cin >> a;
  cout << divideCnt(a);
}