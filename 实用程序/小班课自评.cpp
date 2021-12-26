#include <iostream>
using namespace std;
struct student {
  string numb;
  string res;
};
int main() {
  student array[36];
  string a, b;
  for (int i = 0; i < 36; i++) {
    array[i].res = "";
  }
array[0].numb="202108010101";
array[1].numb="202108010102";
array[2].numb="202108010103";
array[3].numb="202108010104";
array[4].numb="202108010105";
array[5].numb="202108010106";
array[6].numb="202108010107";
array[7].numb="202108010108";
array[8].numb="202108010109";
array[9].numb="202108010110";
array[10].numb="202108010111";
array[11].numb="202108010112";
array[12].numb="202108010113";
array[13].numb="202108010114";
array[14].numb="202108010115";
array[15].numb="202108010116";
array[16].numb="202108010117";
array[17].numb="202108010118";
array[18].numb="202108010119";
array[19].numb="202108010120";
array[20].numb="202108010121";
array[21].numb="202108010122";
array[22].numb="202108010123";
array[23].numb="202108010124";
array[24].numb="202108010125";
array[25].numb="202108010126";
array[26].numb="202108010127";
array[27].numb="202108010128";
array[28].numb="202108010129";
array[29].numb="202108010130";
array[30].numb="202108010131";
array[31].numb="202108010132";
array[32].numb="E202108000101";
array[33].numb="E202108000105";
array[34].numb="E202108000106";
array[35].numb="E202108000109";
  while (cin >> a) {
    for (int i = 0; i < 36; i++) {
      if (array[i].numb == a) {
        cin >> array[i].res;
      }
    }
  }
  cout << "————————————————————----------" << endl;
  for (int i = 0; i < 36; i++) {
    cout << array[i].res << endl;
  }
}