#include "toyCar.h"

ToyCar::ToyCar() {  //初始化小车的数据

  x = 0;
  y = 0;
  battery = rand() % 101;  //此处应该写成随机数,暂时使用99代替
  sign = 1;
}
void ToyCar::moveLeft() {
  --x;
  --battery;
  if (breakDown()) sign = 0;
  if (hole()) battery -= 2;
}
void ToyCar::moveRight() {
  ++x;
  --battery;
  if (breakDown()) sign = 0;
  if (hole()) battery -= 2;
}
void ToyCar::moveUp() {
  ++y;
  --battery;
  if (breakDown()) sign = 0;
  if (hole()) battery -= 2;
}
void ToyCar::moveDown() {
  --y;
  --battery;
  if (breakDown()) sign = 0;
  if (hole()) battery -= 2;
}
void ToyCar::test() {
  for (int i = 0; i < 80; i++) {
    int tmp = rand() % 5;
    switch (tmp) {
      break;
      case 1:
        moveLeft();
        break;
      case 2:
        moveRight();
        break;
      case 3:
        moveUp();
        break;
      case 4:
        moveDown();
      default:
        break;
    }
    if (!sign || battery == 0) {
      cout << "不合格" << endl;
      return;
    }
  }
  for (int i = 0; i < 10; i++) {
    int tmp = rand() % 5;
    switch (tmp) {
      break;
      case 1:
        moveLeft();
        break;
      case 2:
        moveRight();
        break;
      case 3:
        moveUp();
        break;
      case 4:
        moveDown();
      default:
        break;
    }
  }
  if (!sign || battery == 0) {
    cout << "合格" << endl;
    return;
  }
  cout << "优秀" << endl;
  return;
}

bool object::breakDown() {
  int tmp = rand() % 1001;  //此处应该为随机数
  if (tmp == 1) {
    return 1;
  }
  return 0;
}
bool object::hole() {
  int tmp = rand() % 101;  //此处应该为随机数
  if (tmp == 1) {
    return 1;
  } else {
    return 0;
  }
}
void square::operator++() {
  ToyCar* tmp = head;
  while (tmp->next != NULL) tmp = tmp->next;
  tmp->next = new ToyCar;
  cout << "A new toycar has been added to the Square..." << endl;
}
square::square() { head = new ToyCar; }
void square::testcar() {
  for (ToyCar* tmp = head; tmp->next != NULL; tmp = tmp->next) {
    tmp->test();
  }
}