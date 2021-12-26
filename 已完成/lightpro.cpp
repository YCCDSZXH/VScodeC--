#include <iostream>
using namespace std;

class point {
 public:
  int x;
  int y;
  char dy;
  char dx;
};
 int i = 0;
int coordinate[1010][1010];
point p[2];
int pd(int i) {
  
    if (p[i].x == p[0].x && p[i].y == p[0].y && p[i].dy == p[0].dy &&
        p[i].dy == p[0].dy&&i > 1) {
      return 1;
        }
  return 0;
}

void ret(int i) {
  if (p[i-1].dx == 'W') {
    p[i-1].dx ='E';
  }else{
    p[i-1].dx ='W';
  }
  if (p[i-1].dy == 'N') {
    p[i-1].dy ='S';
  }else{
    p[i - 1].dy ='N';
  }
  --i;
}

int main() {
  int n, m;
  cin >> n >> m;
  int temp;
  cin >> temp;
  int coordinateNowX, coordinateNowY;
  for (int i = 0; i < temp; i++) {
    cin >> coordinateNowX >> coordinateNowY;
    coordinate[coordinateNowX][coordinateNowY] = 1;
  }
  for (int i = 0; i < m + 2; i++) {
    coordinate[n + 1][i] = 1;
    coordinate[0][i] = 1;
  }
  for (int i = 0; i < n + 2; i++) {
    coordinate[i][m + 1] = 1;
    coordinate[i][0] = 1;
  }


  cin >> p[0].x >> p[0].y >> p[0].dy >> p[0].dx;
  int i = 0;

  while (1) {
    ++i;
    p[i] = p[i - 1];
    if (pd(i)) {
      cout << i - 1;
      return 0;
    }
    if (p[i - 1].dy == 'S') {
      if (p[i - 1].dx == 'E') {
        if (coordinate[p[i - 1].x + 1][p[i - 1].y + 1] == 1) {
          if (coordinate[p[i - 1].x][p[i - 1].y + 1] == 0) {
            if (coordinate[p[i - 1].x + 1][p[i - 1].y] == 1) {
              ++p[i].y;
              p[i].dy = 'N';
            } else {
              ret(i);  // 123456
            }
          } else {
            if (coordinate[p[i - 1].x + 1][p[i - 1].y] == 1) {
              ret(i);  // 123456
            } else {
              ++p[i].x;
              p[i].dx = 'W';
            }
          }
        } else {
          ++p[i].x;
          ++p[i].y;
        }
      } else {
        if (coordinate[p[i - 1].x + 1][p[i - 1].y - 1] == 1) {
          if (coordinate[p[i - 1].x][p[i - 1].y - 1] == 0) {
            if (coordinate[p[i - 1].x + 1][p[i - 1].y] == 1) {
              --p[i].y;
              p[i].dx = 'E';
            } else {
              ret(i);  // 123456
            }
          } else {
            if (coordinate[p[i - 1].x + 1][p[i - 1].y] == 1) {
              ret(i);  // 123456
            } else {
              ++p[i].x;
              p[i].dx = 'E';
            }
          }
        } else {
          ++p[i].x;
          --p[i].y;
        }
      }
    } else {
      //--------------
      if (p[i - 1].dx == 'E') {
        if (coordinate[p[i - 1].x - 1][p[i - 1].y + 1] == 1) {
          if (coordinate[p[i - 1].x][p[i - 1].y + 1] == 0) {
            if (coordinate[p[i - 1].x - 1][p[i - 1].y] == 1) {
              ++p[i].y;
              p[i].dy = 'S';
            } else {
              ret(i);  // 123456
            }
          } else {
            if (coordinate[p[i - 1].x - 1][p[i - 1].y] == 1) {
              ret(i);  // 123456
            } else {
              --p[i].x;
              p[i].dx = 'W';
            }
          }
        } else {
          --p[i].x;
          ++p[i].y;
        }
      } else {
        if (coordinate[p[i - 1].x - 1][p[i - 1].y - 1] == 1) {
          if (coordinate[p[i - 1].x][p[i - 1].y - 1] == 0) {
            if (coordinate[p[i - 1].x - 1][p[i - 1].y] == 1) {
              --p[i].y;
              p[i].dy = 'S';
            } else {
              ret(i);  // 123456
            }
          } else {
            if (coordinate[p[i - 1].x - 1][p[i - 1].y] == 1) {
              ret(i);  // 123456
            } else {
              --p[i].x;
              p[i].dy = 'S';
            }
          }
        } else {
          --p[i].x;
          --p[i].y;
        }
      }
    }
  }
}