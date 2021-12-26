#include "operateBoard.h"

#include "Teacher.h"
void operateBoard(int i) {  //切换学生界面和管理员界面
  Student s1;
  Teacher t1;
  switch (i) {
    case 1:
      cout << "We1c0me t0 HNU 1i8rary!" << endl;
      t1.teacherSwitch();
      break;
    case 2:
      cout << "We1c0me t0 HNU 1i8rary!" << endl;
      s1.head = StudentList();
      s1.studentSwitch();
      break;
  }
}