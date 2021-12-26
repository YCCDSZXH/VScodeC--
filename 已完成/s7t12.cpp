#include <cmath>
#include <iostream>
using namespace std;
int gcd(int u, int v) {
  for (int i = u > v ? u : v;; --i) {
    if (u % i == 0 && v % i == 0) {
      return i;
    }
  }
}
int getlength(int a) {
  int i = 0;
  for (; a != 0; i++) {
    a /= 10;
  }
  return i;
}
int main() {
  int n;
  char ch;
  cin >> n;
  getchar();
 
  int numb[2][n];
  int fz[n], fm[n];

  for (int i = 0; i < n; i++) {
    numb[0][i] = 0;
    numb[1][i] = 0;
    // int sign = 0;
    scanf("0.%d(%d)", &numb[0][i], &numb[1][i]);
    //cin >> ch >> ch >>
    //scanf("0.(%d)", &numb[1][i]);
    getchar();
    if (!numb[1][i]) {
      int temp = getlength(numb[0][i]);
      fz[i] = numb[0][i];
      fm[i] = pow(10, temp);
      temp = gcd(fz[i], fm[i]);
      fz[i] /= temp;
      fm[i] /= temp;
    }else{
      int temp = getlength(numb[1][i]);
      fz[i] = numb[0][i] * pow(10, temp) + numb[1][i] - numb[0][i];
      temp += getlength(numb[0][i]);
      fm[i] = pow(10, temp - 1) - 1;
      temp = gcd(fz[i], fm[i]);
      fz[i] /= temp;
      fm[i] /= temp;
    }
    }
  for (int i = 0; i < n; i++) {
    cout << fz[i] << "/" << fm[i] << endl;
  }
}