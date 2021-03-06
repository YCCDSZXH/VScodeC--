#include "Books.h"

#include <cstring>
#include <fstream>
void Book::creatBookListSingle(string& which) {
  string filePath = "database/booksClass" + which + ".txt";
  ifstream IFS(filePath, ios::binary);
  Book* tmp = new Book;
  Book* ptr = this;
  while (IFS.read((char*)tmp, 160)) {
    ptr->next = tmp;
    ptr = ptr->next;
    tmp = new Book;
  }
  delete tmp;
  ptr->next = NULL;
  IFS.close();
}
void Book::printBookListSingle() {
  cout << name << ' ' << ISBN << ' ' << auther << ' ' << kind << endl;
  cout << "==========================\n";
  for (Book* tmp = next; tmp != NULL; tmp = tmp->next) {
    cout << tmp->name << ' ' << tmp->ISBN << ' ' << tmp->auther << ' '
         << tmp->kind << endl;
  }
  cout << "=========================" << endl;
}

Book* Book::creatBookListAll() {
  char readFileNameList[23] = "ABCDFFGHIJKNOPQRSTUVXZ";
  Book* booksClassHeadlist = new Book[22];
  for (int i = 0; i < 22; i++) {
    string tmp = "A";
    tmp[0] = readFileNameList[i];
    booksClassHeadlist[i].creatBookListSingle(tmp);
  }
  return booksClassHeadlist;
}
void Book::searchBookByName(string& nameSearchKeywords,
                            Book*& booksClassHeadlist) {
  for (int i = 0; i < 22; i++) {
    for (Book* tmp = &booksClassHeadlist[i]; tmp; tmp = tmp->next) {
      if (strstr(tmp->name, &nameSearchKeywords[0])) {
        cout << tmp->name << ' ' << tmp->ISBN << ' ' << tmp->auther << ' '
             << tmp->kind << endl;
      }
    }
  }
}
void Book::searchBookByAuther(string& autherSearchKeywords,
                        Book*& booksClassHeadlist) {
  for (int i = 0; i < 1; i++) {
    for (Book* tmp = &booksClassHeadlist[i]; tmp; tmp = tmp->next) {
      if (strstr(tmp->auther, &autherSearchKeywords[0])) {
        cout << tmp->name << ' ' << tmp->ISBN << ' ' << tmp->auther << ' '
             << tmp->kind << endl;
      }
    }
  }
}
void Book::searchBookByISBN(string& ISBNSearchKeywords,Book*&booksClassHeadlist){
  for (int i = 0; i < 1; i++) {
    for (Book* tmp = &booksClassHeadlist[i]; tmp; tmp = tmp->next) {
      if (strstr(tmp->ISBN, &ISBNSearchKeywords[0])) {
        cout << tmp->name << ' ' << tmp->ISBN << ' ' << tmp->auther << ' '
             << tmp->kind << endl;
      }
    }
  }
}
// void searchBookByAll(string& tmp);