#include <iostream>
#include <string>
using namespace std;
int pd(char ch) {
  switch (ch) {
    case 'a':
    case 'o':
    case 'u':
    case 'i':
    case 'e':
      return 1;
    default:
      return 0;
  }
}
int main() {
  string str;
  getline(cin, str);
  //cout << str;
  if (str.length() == 1 && pd(str[0]) != 1) {
    cout << "NO";
    return 0;
  }
  if (pd(str[str.length() - 1]) == 0 && (str[str.length() - 1] != 'n')) {
    cout << "NO";
    return 0;
  }
  for (int i = 0; i < (int)str.length(); i++) {
    if (str[i] == 'n') {
      str.erase(i, 1);
    }
  }
  // cout << str;
  for (int i = 0; i < (int)str.length() - 1; i++) {
    if (pd(str[i]) == 0 && pd(str[i + 1]) == 0) {
      cout << "NO";
      return 0;
    }
  }
  cout << "YES";
  return 0;
}