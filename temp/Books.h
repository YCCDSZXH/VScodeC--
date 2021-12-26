#ifndef BOOKS_H
#define BOOKS_H
#include <iostream>
using namespace std;
class Book {
 public:
  char name[60];
  char auther[60];
  char ISBN[20];
  char kind[5];
  Book* next;
  void creatBookListSingle(string which);
  void creatBookListAll();
  void printBookListSingle();

};

#endif