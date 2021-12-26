#include <iostream>
using namespace std;

int max(int a,int b){
  if (a > b)
  return a;
  else
  return b;
}

int main (){
  int arr[1000];
  int n,ans = 0;
  cin >> n;
  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }
  for (int i = 0; i < n; i++){
    ans = max (arr[i],ans);
  }
  cout << ans;
}