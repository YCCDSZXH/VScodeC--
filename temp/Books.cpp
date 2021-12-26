#include "Books.h"

#include <fstream>
void Book::creatBookListSingle(string which) {
  string filePath = "database/booksClass" + which + ".txt";
  ifstream IFS(filePath, ios::binary);
  Book* tmp = new Book;
  Book* ptr = this;
  while (IFS.read((char*)tmp, 168)) {
    ptr->next = tmp;
    ptr = ptr->next;
    tmp = new Book;
  }
  ptr->next=NULL;
  delete tmp;
  IFS.close();
}
void Book::printBookListSingle() {
  cout << name << ' ' << ISBN << ' ' << auther << ' ' << kind << endl;
  cout << "==========================\n";
  for (Book* tmp = next; tmp!= NULL; tmp = tmp->next) {
    cout << tmp->name << ' ' << tmp->ISBN << ' ' << tmp->auther << ' '
         << tmp->kind << endl;
  }
  cout << "=========================" << endl;
}