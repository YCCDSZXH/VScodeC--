#include <fstream>
#include <iostream>
#include <string>

#include "Books.h"
#include "board.h"
using namespace std;
int main() {
  // Teacher* loginT = NULL;
  // Student* loginS = NULL;
  // //===============================
  // //登录模块
  // //===============================
  // board b1;
  // b1.welcome();
  // int loginMode;
  // bool welcomeSign = 1;
  // while (welcomeSign) {
  //   cin >> loginMode;

  //   switch (loginMode) {
  //     case 0:
  //       cout << "感谢您的使用......" << endl;
  //       return 0;
  //     case 1:
  //       loginS = b1.student();
  //       welcomeSign = 0;
  //       break;
  //     case 2:
  //       loginT = b1.teacher();
  //       welcomeSign = 0;
  //       break;
  //     default:
  //       cout << "请输入0/1/2......" << endl;
  //       break;
  //   }
  // }
  // //===============================
  // //操作模块
  // //===============================
  // if (loginT) {
  //   loginT->teacherDashBoard();
  // }else{
  //   loginS->studentDashBoard();
  // }
  // //===============================

  Book b1;
  Book* tmp;
  tmp = b1.creatBookListAll();
  // tmp[3].printBookListSingle();
  string a = "邓";
  b1.searchBookByName(a, tmp);
  // b1.printBookAutherListSingle();
  // if(b1.teacher())cout << 1000;

  // Student s;
  // strcpy(s.id, "123");
  // s.findStudentList();
  // s.id ={'1','2','3'};
  // s.psw = "1";

  // strcpy(s.psw, "psw");
  // s.creatList();
  // s.printList();

  // s.addList();
  // s.writeList();
  // s.printList();

  // cout << sizeof(s);
  // int a;
  // ifstream IFS("Student.txt");
  // IFS>>a;
  // cout <<a;
  // ifstream IFS("Students.txt");
  // IFS.seekg(0,ios::beg);
  // if(IFS.is_open()){
  //   cout <<2;
  // }
  // Student *tmp = new Student;
  // string id1,psw1;
  // char a[20];
  // IFS>>a;
  // while (1){
  //   tmp->next = new Student;
  //   tmp->next=tmp;
  //   tmp = tmp->next;
  // }
  // cout << a;
  // IFS.close();

  //   ofstream Ofs(SENTENCE,ios::binary|ios::trunc);
  //     Sentence s;
  //     for(int i=0;i<33;i++)
  //     {
  //         cin>>s.Words;
  //         Ofs.write((const char*)&s,40);
  //     }
  //     Ofs.close();
  //     s.create_list();
  //     for(Sentence*head=(&s)->Next;head;head=head->Next)
  //     cout<<head->Words<<'\n';

  //     void Sentence::create_list()
  // {
  //     S_ptr S_mid = this, S_end = this;
  //     ifstream Ifs(SENTENCE, ios::binary);
  //     while (Ifs.read((char *)S_mid, 40))
  //     {
  //         S_end->Next = S_mid;
  //         S_end = S_mid;
  //         S_mid = new Sentence;
  //     }
  //     S_end->Next = NULL;
  //     Ifs.close();
  // }
}