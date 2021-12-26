#include <iostream>
#include "DashBoard.h"
#include "operateBoard.h"
#include "Teacher.h"
using namespace std;

int main(){
  int tmp = displayDashBoard();
  operateBoard(tmp);
}