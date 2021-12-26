#include <iostream>
using namespace std;

class Tdate {  //用class引导,定义Tdate类
 public:  //用public说明以下代码可在类外被直接访问,如main函数中访问该成员
  void set(int m, int d,
           int y) {  //成员函数set得到三个参数,为自己的成员数据赋值
    month = m;
    day = d;
    year = y;
  }
  int isLeapYear() {  //成员函数isLeapYear,根据自己的年份成员,判是否闰年
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
  }
  void print() {  //成员函数print,将自己的年月日数据输出
    cout << month << "/" << day << "/" << year << endl;
  }

 private:
  //用private说明以下数据不可在类外被直接访问
  int month;
  int day;
  int year;
};
int main(){
//类定义之后,main函数正式开场
  Tdate a; 
//定义Tdate类对象a
  a.set(2,4,1998); 
//依托a对象调用公共成员函数set,设置a中日期
  a.print(); 
//依托a对象调用公共成员函数print,输出a中日期
 // cout<<a.year; 
//错:不能在类外访问a对象的私有成员
}
