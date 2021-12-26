#ifndef TEACHER_H
#define TEACHER_H
#include "Teacher.h"
void Teacher::teacherDashBoard() {
  int doWhat;
  while (1) {
    cout << "(0)返回上一级          (-1)退出系统" << endl;
    cout << "(1)添加学生账号\n(2)重置学生账号的密码" << endl;
    cout << "(3)删除学生账号\n(4)添加图书\n(5)修改图书信息" << endl;
    cout << "(6)删除图书" << endl;
    // printStudentList ();
    cin >> doWhat;
    switch (doWhat) {
      case 0:
        break;
      case -1:
        break;
      case 1:
        addStudentList();
        writeStudentList();
        break;
      case 2:
        renewStudentPsw();
        writeStudentList();
        break;
      case 3:
        deleteStudentList();
        
        break;
      case 11:
        printStudentList();
    }
  }
}

#endif