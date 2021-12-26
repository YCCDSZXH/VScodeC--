#include <iostream>
using namespace std;

char direction[2];
int coordinate[1000][1000];
int coordinateNowX, coordinateNowY;

void pd(int temp1,int temp2){
  if (coordinateNowX == temp1 && temp2 == coordinateNowY){
    
  }
}

int main() {
  int n, m, ans = 0;
  cin >> n >> m;
  int* temp = new int;
  cin >> *temp;

  for (int i = 0; i < *temp; i++) {
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
  delete temp;
  cin >> coordinateNowX >> coordinateNowY;
  int temp1 = coordinateNowX;
  int temp2 = coordinateNowY;
  cin >> direction[0] >> direction[1];
  while (1)
    if (direction[0] == 'N') {
      if (direction[1] == 'E') 
        switch (coordinate[coordinateNowX + 1][coordinateNowY + 1]) {
          case 0:
            ++coordinateNowX;
            ++coordinateNowY;
            ans++;
            break;

          default:
            switch (coordinate[coordinateNowX + 1][coordinateNowY]) {
              case 0:
                switch (coordinate[coordinateNowX][coordinateNowY + 1]) {
                  case 0:
                    cout << ans;
                    return 0;
                    break;

                  default:
                    ++coordinateNowX;
                    direction[0] = 'S';
                    ans++;
                    break;
                }
                break;

              default:
                switch (coordinate[coordinateNowX][coordinateNowY + 1]) {
                  case 0:
                    ++coordinateNowY;
                    direction[0] = 'W';
                    ans++;
                    break;

                  default:
                    cout << ans;
                    return 0;
                    break;
                }
                break;
            }
        }
      else
        switch (coordinate[coordinateNowX - 1][coordinateNowY + 1]) {
          case 0:
            --coordinateNowX;
            ++coordinateNowY;
            ans++;
            break;

          default:
            switch (coordinate[coordinateNowX - 1][coordinateNowY]) {
              case 0:
                switch (coordinate[coordinateNowX][coordinateNowY + 1]) {
                  case 0:
                    cout << ans;
                    return 0;
                    break;

                  default:
                    --coordinateNowX;
                    direction[0] = 'S';
                    ans++;
                    break;
                }
                break;

              default:
                switch (coordinate[coordinateNowX][coordinateNowY + 1]) {
                  case 0:
                    ++coordinateNowY;
                    direction[0] = 'W';
                    ans++;
                    break;

                  default:
                    cout << ans;
                    return 0;
                    break;
                }
                break;
            }
        }
    } else {
      if (direction[1] == 'E')
        switch (coordinate[coordinateNowX + 1][coordinateNowY - 1]) {
          case 0:
            ++coordinateNowX;
            --coordinateNowY;
            ans++;
            break;

          default:
            switch (coordinate[coordinateNowX + 1][coordinateNowY]) {
              case 0:
                switch (coordinate[coordinateNowX][coordinateNowY - 1]) {
                  case 0:
                    cout << ans;
                    return 0;
                    break;

                  default:
                    ++coordinateNowX;
                    direction[0] = 'N';
                    ans++;
                    break;
                }
                break;

              default:
                switch (coordinate[coordinateNowX][coordinateNowY - 1]) {
                  case 0:
                    --coordinateNowY;
                    direction[0] = 'E';
                    ans++;
                    break;

                  default:
                    cout << ans;
                    return 0;
                    break;
                }
                break;
            }
        }
      else
        switch (coordinate[coordinateNowX - 1][coordinateNowY - 1]) {
          case 0:
            --coordinateNowX;
            --coordinateNowY;
            ans++;
            break;

          default:
            switch (coordinate[coordinateNowX - 1][coordinateNowY]) {
              case 0:
                switch (coordinate[coordinateNowX][coordinateNowY - 1]) {
                  case 0:
                    cout << ans;
                    return 0;
                    break;

                  default:
                    --coordinateNowX;
                    direction[0] = 'N';
                    ans++;
                    break;
                }
                break;

              default:
                switch (coordinate[coordinateNowX][coordinateNowY - 1]) {
                  case 0:
                    --coordinateNowY;
                    direction[0] = 'E';
                    ans++;
                    break;

                  default:
                    return 1;
                    cout << ans;
                    break;
                }
                break;
            }
        }
    }
}