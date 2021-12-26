#include "MyString.h"
int main() {
  MyString ms1("Hello Kitty!");
  MyString ms2;
  MyString ms3("Hello world! Hello full score!");
  MyString ms4(ms3);
  int a = ms3.length();
  ms2.assign(ms3);
  cout << ms2 << '\n';
  cout << ms2.size() << ms3.length() << '\n';
  for (int i = 0; i < ms2.size(); i++) {
    char& m = ms2.at(i);
    m = 'H';
  }
  cout << ms2 << '\n';
  cout << "ms1:ms3," << (ms1 < ms3) << ";ms3:ms1," << (ms1 > ms3) << '\n';
  ms1 = ms3;
  cout << ms1;
}

