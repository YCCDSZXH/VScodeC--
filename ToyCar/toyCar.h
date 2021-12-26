#ifndef TOYCAR_H
#define TOYCAR_H
#include <stdlib.h>
#include <time.h>

#include <iostream>
using namespace std;
class Location {
 public:
  int x;
  int y;
};

class object {
 protected:
  bool breakDown();
  bool hole();
};
class ToyCar : private Location, object {
  int battery;
  bool sign;

 public:
  ToyCar* next;
  ToyCar();
  ~ToyCar();
  void moveLeft();
  void moveRight();
  void moveUp();
  void moveDown();
  void test();
};
class square {
  ToyCar* head;

 public:
  void operator++();
  square();
  void testcar();
};
#endif