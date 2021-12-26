#include "MyString.h"
MyString::~MyString() {
  delete[] cpstr;
  size1 = 0;
  cout << "destructor;" << endl;
}
MyString::MyString() { cout << "default constructor" << endl; }
MyString::MyString(string str) {
  size1 = str.size() + 1;
  cpstr = new char[size1 + 1];
  for (int i = 0; i < size1 - 1; i++) {
    cpstr[i] = str[i];
  }
  cout << "constructor with paramrter;" << cpstr << endl;
}
MyString::MyString(const MyString& ms) {
  size1 = ms.size1;
  cpstr = new char[size1 + 1];
  for (int i = 0; i < size1 - 1; i++) {
    cpstr[i] = ms.cpstr[i];
  }
  cout << "copy constructor;" << cpstr << endl;
}
void MyString::assign(const MyString& ms) {
  // delete[] cpstr;
  cpstr = new char[ms.size1];
  for (int i = 0; i < ms.size1 - 1; i++) {
    cpstr[i] = ms.cpstr[i];
  }
  size1 = ms.size1;
};
int MyString::length() { return size1; }
int MyString::size() { return size1; }
char& MyString::at(int i) { return *(cpstr + i); }
ostream& operator<<(ostream& cout, MyString& tmp) {
  cout << tmp.cpstr;
  return cout;
}
void MyString::operator=(MyString& AnotherMyString) {
  delete[] cpstr;
  size1 = AnotherMyString.length();
  cpstr = new char[size1 + 1];
  strcpy(cpstr, AnotherMyString.cpstr);
}
bool MyString::operator>(MyString& AnotherMyString){
  if (this->size1 > AnotherMyString.size1) return 1;
  return 0;
}
bool MyString::operator<(MyString& AnotherMyString){
  if (this->size1 < AnotherMyString.size1) return 1;
  return 0;
}
