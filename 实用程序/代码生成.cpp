#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  //double arr[34];
  string arr[34];

  for (int i = 0; i <= 33; i++) {
    // for (int j = 0; j < 7; j++){
    cin >> arr[i];
  }
  //    cin >>brr[i];
  // }
  //  for (long long i = 202108080101;i<= 202108010132;){
  //    for (int j = 0; j < 7; j++){
  //    cout << "array["<<"].numb="<<i<<";"<<endl;
  //    }
  //      cout << "array["<<i<<"].numb="<<brr[i]<<endl;
  // cout << i<<endl;
  //   }
  for (int i = 0; i <= 33; i++) {
    cout << "array[" << i << "].score[10] = " << arr[i] << ";" << endl;
    
  }
}
