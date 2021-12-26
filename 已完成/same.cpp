#include <iostream>
using namespace std;

int main() {
  int arr[1000], n, sign;
  cin >> n;
  cin >> sign;

  for (int j = 0; j < n; j++) {
    cin >> arr[j];
  }

  for (int j = 0; j < n; j++) {
    if (sign == arr[j]) {
      cout << 1;
      return 0;
    }
  }

  cout << 0;
  return 0;
}