#ifndef MYSTRING_H
#define MYSTRING_H
#include <iostream>
using namespace std;
class MyString {
  char* cpstr;
  int size1;

 public:
  MyString();
  MyString(string str);
  MyString(const MyString& ms);
  void assign(const MyString& ms);
  int length();
  int size();
  char& at(int i);
  friend ostream& operator<<(ostream& cout, MyString& tmp);
  void operator=(MyString& AnotherMyString);
  bool operator>(MyString& AnotherMyString);
  bool operator<(MyString& AnotherMyString);
  ~MyString();
};

#endif