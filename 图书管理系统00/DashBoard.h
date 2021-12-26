#include <iostream>
using namespace std;
class DashBoard {
 public:
  int mode;
  string id;
  string password;
  void welcomeBoard();
  void displayStartBoard();
  void boardForTeacher();
  void boardForStudent();
  int getPassword();
};
int displayDashBoard();