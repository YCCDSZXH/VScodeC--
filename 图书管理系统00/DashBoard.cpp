#include "DashBoard.h"

#include "Student.h"
int* sign = new int;
//此函数用来代替清屏操作
void cls() { cout << "--------------------------\n"; }
//主界面的上边
void DashBoard::welcomeBoard() { cout << "We1c0me T0 HNU 1i8rary!" << endl; }
//主界面的登录选项
void DashBoard::displayStartBoard() {
  cout << "如果您要使用学生账号登陆,请输入1" << endl;
  cout << "如果您要使用教师账号登陆,请输入2" << endl;
  cout << "退出系统,请输入123123" << endl;
  cin >> mode;
  cls();
}
//教师登录界面s
void DashBoard::boardForTeacher() {
  cout << "老师您好!" << endl;
  while (1) switch (getPassword()) {
      case 1:
        if (id == "admin" && password == "123456") {  //管理员登录判断
          cout << "密码正确,正在登录......" << endl;
          cout << "登录成功" << endl;
          *sign = 1;
          return;
        } else {
          cout << "账号或密码错误,请重试......" << endl;
          cls();
        }
      default:
        break;
      case 0:
        return;
    }
}
//学生登录界面
void DashBoard::boardForStudent() {
  cout << "同学您好!" << endl;
  cout << "忘记密码请联系管理员找回密码" << endl;
  Student* head = StudentList();
  while(1)switch(getPassword()) {
    //——————————————
    case 1:
    
    for (Student* ptr = head->next; ptr != NULL; ptr = ptr->next) {
      if (id == ptr->id) {
        if(password==ptr->password){
          *sign = 2;
          return;
        }
        break;
      }
    }
    cout << "账号或密码错误,请重试......\n忘记密码请联系管理员";
    default:
        break;
      case 0:
        return;
    // *sign = 2;
  }
}
//通用的输入密码界面,会改变ID和password变量的信息
int DashBoard::getPassword() {
  cout << "返回上一级请输入0" << endl;
  cout << "确定要登陆请输入1" << endl;
  cout << "退出系统请输入123123" << endl;
  int temp;
  cin >> temp;
  cls();
  switch (temp) {
    case 1:
      cout << "您好!请输入账号和密码" << endl;
      cout << "账号: ";
      cin >> id;
      cout << "密码: ";
      cin >> password;
      return 1;
    case 0:
      // displayDashBoard();
      return 0;
      // break;
    case 123123:
      cout << "您已退出系统\n感谢您的使用,祝您身体健康,万事如意" << endl;
      break;
    default:
      cout << "请输入0或1或123123" << endl;
      return getPassword();
  }
  return 0;
}
int displayDashBoard() {
  DashBoard dash1;
  while (*sign == 0) {
    dash1.welcomeBoard();
    dash1.displayStartBoard();
    switch (dash1.mode) {
      case 1:
        dash1.boardForStudent();
        break;
      case 2:
        dash1.boardForTeacher();
        break;
      case 123123:
        cout << "您已退出系统\n感谢您的使用,祝您身体健康,万事如意" << endl;
        break;
      default:
        cout << "请输入1或2,谢谢!" << endl;
        displayDashBoard();
    }
  }
  return *sign;
}
