#include "MyArray.cpp"
int main() {
  char array[] = {'1', '2', '3', '4', '5'};
  MyArray<char> arr2(array, sizeof(array) / sizeof(char));
  MyArray<char> arr3 = arr2;
  MyArray<char> arr4 = arr2 + arr2;
  arr2.print();
  arr3.print();
  arr4.print();
}
