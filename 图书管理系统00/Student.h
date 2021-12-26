#ifndef STUDENT_H
#define STUDENT_H
#include <fstream>
#define FILENAME "Student.txt"
#include <iostream>

using namespace std;

class Student {
 public:
  int i;
  // Student* head;
  string id;
  string password;
  Student* next;
  void studentSwitch();
  void changePassword();
  void test();
  Student* head;
};
Student* StudentList();
#endif