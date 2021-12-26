#include <fstream>
#include <iostream>

#include "Books.h"
using namespace std;
int main() {
  string kind = "C";
  Book tmp;


  cout << sizeof(tmp) << endl;
  // while (cin >> tmp.name >> tmp.ISBN >> tmp.auther >> tmp.kind) {
  //   while (tmp.kind[0] > kind[0]) {
  //     kind[0]++;
  //   }
  //   ofstream OFS("database/booksClass" + kind + ".txt", ios::binary | ios::app);
  //   // cout << tmp.name << ' ' << tmp.ISBN << ' ' << tmp.auther << ' ' <<
  //   // tmp.kind
  //   //      << endl;

  //   OFS.write((const char*)&tmp, 160);
  //   OFS.close();
  // }


  ifstream IFS("database/booksClass" + kind + ".txt", ios::binary);
  while (IFS.read((char*)&tmp, 160)) {
    cout << tmp.name << ' ' << tmp.ISBN << ' ' << tmp.auther << ' ' << tmp.kind
         << endl;
  }
  IFS.close();


  // Book b1;
  // b1.creatBookListSingle("A");
  // b1.printBookListSingle();
  return 0;
}