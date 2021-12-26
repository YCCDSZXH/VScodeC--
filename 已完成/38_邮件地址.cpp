#include <cctype>
#include <iostream>
#include <string>
using namespace std;
int main() {
  string str;
  cin >> str;
  int n = str.length(), m = 0, a = 0, b = 1, c = 0;
  for (int i = 0; i < n; i++) {
    if (m == 2) {
      if (a == 0 && !(isalpha(str[i])))
        m = 0;
      else if (isalpha(str[i]))
        a++;
      else {
        b *= a;
        c += b;
        b = 1;
        m = 0;
      }
      if (a != 0 && i == n - 1) {
        b *= a;
        c += b;
        b = 1;
        m = 0;
      }
    }
    if (m == 1) {
      if (isalpha(str[i]) || isdigit(str[i]))
        a++;
      else if (a == 0) {
        m = 0;
        b = 1;
        i = i - 1 - a;
      }
      if (a != 0 && str[i] == '.') {
        m = 2;
        a = 0;
      }
    }
    if (m == 0) {
      if (isalpha(str[i])) a++;
      if (a > 0 && str[i] == '@') {
        b *= a;
        m = 1;
        a = 0;
      }
      if (str[i] == '.') a = 0;
    }
  }
  cout << c;
  return 0;
}
