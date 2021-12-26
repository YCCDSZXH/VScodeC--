#ifndef STUDENT_HPP
#define STUDENT_HPP
#include <iostream>
using namespace std;
class Student {
 public:
  char id[9];
  char psw[17];
  Student *next;
  void creatStudentList();
  void writeStudentList();
  void printStudentList();
  Student* findStudentList();
  void addStudentList();
  void renewStudentPsw();
  void deleteStudentList();
  void studentDashBoard();
  void changeStudentPsw();
  Student();
};

#endif