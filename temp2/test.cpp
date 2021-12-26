#include <iostream>
#include <fstream>
#include "HNULibrary.h"
using namespace std;
int main(){
  ifstream IFS("books.txt",ios::in);
  string name,isbn,auther,ztfl;
  book* head = new book;
  while(IFS >> name&&IFS>>isbn&&IFS>>auther&&IFS>>ztfl){
    
  }
}