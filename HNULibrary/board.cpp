#include "board.h"

void board::welcome() {
  cout << "We1c0me T0 "
          "HNUl16rary!\n(0)退出图书馆系统\n(1)使用学生账号登录\n(2)"
          "使用教师账号登录\n请输入数字:";
}
Student* board::student() {
  Student* s = new Student;
  s->creatStudentList();
  cout << "同学你好,请输入账号和密码" << endl;
  cout << "账号:";
  cin >> s->id;
  cout << "密码:";
  cin >> s->psw;
  // s->printList();
  for (Student* tmp = s->next; tmp != NULL; tmp = tmp->next) {
    if (!strcmp(s->id, tmp->id)) {
      if (!strcmp(s->psw, tmp->psw)) return s;
      return NULL;
    }
  }
  return NULL;
}
Teacher* board::teacher() {
  Teacher* s = new Teacher;
  s->creatStudentList();
  // s->printStudentList();
  while (1) {
    cout << "老师你好,请输入账号和密码" << endl;
    cout << "账号(admin):";
    cin >> s->id;
    cout << "密码(123456):";
    cin >> s->psw;
    if ((!strcmp(s->id, "1")) && (!strcmp(s->psw, "1"))) {
      return s;
    }else{
      cout << "密码错误,请重新输入......"<<endl;
    }
    // s->printList();
    // for (Teacher* tmp = s->next; tmp != NULL; tmp = tmp->next) {
    //   if (!strcmp(s->id, tmp->id)) {
    //     if (!strcmp(s->psw,tmp->psw)) return s;
    //     return NULL;
    //   }
    // }
  }
  return NULL;
}