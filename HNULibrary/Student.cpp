#include "Student.h"

#include <fstream>
#define STUDENTSFILE "Students.txt"
Student::Student() { next = NULL; }
void Student::creatStudentList() {
  ifstream IFS(STUDENTSFILE, ios::binary);
  Student *tmp = new Student;
  Student *ptr = this;
  while (IFS.read((char *)tmp, 40)) {
    ptr->next = tmp;
    ptr = ptr->next;
    tmp = new Student;
  }
  ptr->next = NULL;
  delete tmp;
  IFS.close();
}
void Student::writeStudentList() {
  ofstream OFS(STUDENTSFILE, ios::binary);
  for (Student *tmp = next; tmp != NULL; tmp = tmp->next) {
    OFS.write((const char *)tmp, 40);
  }
  OFS.close();
  cout << "write done" << endl;
}
void Student::printStudentList() {
  cout << id << ' ' << psw << endl;
  cout << "==========================\n";
  for (Student *tmp = next; tmp != NULL; tmp = tmp->next) {
    cout << tmp->id << ' ' << tmp->psw << endl;
  }
  cout << "=========================" << endl;
}
void Student::addStudentList() {
  Student *ptr = this;
  while (ptr->next) ptr = ptr->next;
  ptr->next = new Student;
  ptr = ptr->next;
  // printStudentList();
  while (1) {
    cout << "请输入账号:";
    cin >> id;
    cout << "请输入密码:";
    cin >> psw;
    if (strlen(id) > 14 && strlen(psw) > 15) {
      cout << "\n密码或账号过长,请重新输入......";

    } else {
      strcpy(ptr->id, id);
      strcpy(ptr->psw, psw);
      break;
    }
    if (findStudentList()) {
      cout << "该用户已存在" << endl;
    }
  }
}
Student *Student::findStudentList() {
  for (Student *tmp = next; tmp != NULL; tmp = tmp->next) {
    if (!strcmp(tmp->next->id, id)) {
      return tmp;
    }
  }
  return NULL;
}
void Student::renewStudentPsw() {
  cout << "请输入要重置的账号:";
  cin >> id;
  Student *tmp = findStudentList()->next;
  if (tmp) {
    strcpy(tmp->psw, id);
    cout << "已重置..." << endl;
    // printStudentList();
  } else {
    cout << "用户不存在或已删除..." << endl;
  }
}
void Student::deleteStudentList() {
  cout << "请输入要删除的账号:";
  cin >> id;
  Student *tmp = findStudentList();
  if (tmp) {
    Student *temp = tmp;
    tmp->next = tmp->next->next;
    delete temp->next;
    cout << "已删除..." << endl;
    // printStudentList();
  } else {
    cout << "用户不存在或已删除..." << endl;
  }
}
void Student::changeStudentPsw() {
  Student *tmp = findStudentList();
  cout << "请输入修改后的密码:";
  char *a = new char[17];
  char *b = new char[17];
  cin >> a;
  cout << "请再出输入修改后的密码:";
  cin >> b;
  if (strcmp(a, b)) {
    cout << "两次输入的密码不一样,将返回主界面..." << endl;
  } else {
    strcpy(tmp->next->psw,a);
    cout << "修改成功!" << endl;
  }
}
void Student::studentDashBoard() {
  int doWhat;
  while (1) {
    cout << "(0)返回上一级          (-1)退出系统" << endl;
    cout << "(1)搜索图书\n(2)借阅图书" << endl;
    cout << "(3)还书\n(4)修改密码" << endl;
    cin >> doWhat;
    switch (doWhat) {
      case 0:
        break;
      case -1:
        break;
      case 1:
        break;
      case 2:
        break;
      case 3:
        break;
      case 4:
        changeStudentPsw();
        break;
      case 11:
        printStudentList();
    }
  }
}