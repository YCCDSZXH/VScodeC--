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
  void creatBookListSingle(string& which);
  Book* creatBookListAll();
  void printBookListSingle();
  void searchBookByName(string& nameSearchKeywords,Book*&);
  void searchBookByAuther(string& tmp,Book*&);
  void searchBookByAll(string& tmp,Book*&);

};

#endif