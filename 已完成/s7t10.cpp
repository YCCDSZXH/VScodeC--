#include <iostream>
using namespace std;

bool pd(char ch) {
  switch (ch) {
    case /* constant-expression */ 'y':;
    case 'u':
    case 'i':
    case 'o':
    case 'p':
    case 'h':
    case 'j':
    case 'k':
    case 'l':
    case 'n':
    case 'm':
    case 'U':
    case 'I':
    case 'O':
    case 'P':
    case 'H':
    case 'J':
    case 'K':
    case 'L':
    case 'N':
    case 'M':
    case 'Y':
      return 1;
      break;

    default:
      return 0;
      break;
  }
}

int main() {
  int n;
  cin >> n;
  //cout << n << " ";
  int ans[n + 1], a = 0;
  string str[n + 1];
  for (int i = 0; i <= n; i++) ans[i] = 0;
  for (int i = 0; i < n; i++) {
    cin >> str[i];
    //cout << str[i] << "  ";
    for (int j = 0; j < i; j++)
      if (str[j] == str[i]) {//如果与之前输入过这个单词
        ans[i] = ans[j] / 2;
        break;
      }
    if (ans[i] == 0) {
      for (int j = 1; j < (int)str[i].length(); j++) {//之前没输入过
        if (pd(str[i][j - 1]) != pd(str[i][j])) {//判断是不是同一侧输入
          ans[i] += 2;
        } else {
          ans[i] += 4;
        }
      }
      ans[i] += 2;
    }
  }
  for (int i = 0; i < n; i++) {
    a += ans[i];
    //cout << ans[i] << endl;
  }
 
  cout << a;
}