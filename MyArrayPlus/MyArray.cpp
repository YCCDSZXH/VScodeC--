#include "MyArray.h"
template <class T>
void MyArray<T>::print() {
  for (int i = 0; i < len; i++) {
    cout << pdata[i] << ' ';
  }
  cout << endl;
}
template <class T>
MyArray<T>::MyArray() {
  cout << "默认构造函数已被调用" << endl;
}
template <class T>
MyArray<T>::MyArray(const MyArray<T>& temp) {
  len = temp.len;
  pdata = new T[len];
  for (int i = 0; i < len; i++) {
    pdata[i] = temp.pdata[i];
  }
  cout << "拷贝构造函数已被调用" << endl;
}
template <class T>
MyArray<T>::MyArray(T* ip, int size) {
  len = size;
  pdata = new T[size];
  for (int i = 0; i < size; i++) {
    pdata[i] = ip[i];
  }
  cout << "有参函数已被调用" << endl;
}
template <class T>
MyArray<T>::~MyArray() {}
template <class T>
MyArray<T> MyArray<T>::operator+(const MyArray<T>& p1) {
  MyArray temp;
  temp.len = len + p1.len;
  temp.pdata = new T[len];
  for (int i = 0; i < len; i++) {
    temp.pdata[i] = pdata[i];
  }
  for (int i = len; i < temp.len; i++) {
    temp.pdata[i] = p1.pdata[i - len];
  }
  return temp;
}
