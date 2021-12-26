#include <iostream>
using namespace std;

class matrix {
 public:
  int len;  //行
  int wid;  //列
  double** mat;
  matrix() {
    cin >> len >> wid;
    mat = new double*[len];
    for (int i = 0; i < len; ++i) {
      mat[i] = new double[wid];
    }
    for (int i = 0; i < len; ++i) {
      for (int j = 0; j < wid; j++) {
        cin >> mat[i][j];
      }
    }
  }
  matrix(int a, int b) {
    len = a;
    wid = b;
    mat = new double*[len];
    for (int i = 0; i < len; ++i) {
      mat[i] = new double[wid];
    }
  }
  ~matrix() {
    for (int i = 0; i < len; ++i) {
      delete[] mat[i];
    }
    delete[] mat;
  }
  void print() {
    for (int i = 0; i < len; ++i) {
      for (int j = 0; j < wid; j++) {
        cout << mat[i][j] << ' ';
      }
      cout << endl;
    }
  }
  double numb(){
    for(int i = 0; i < len - 1; ++i){
      for(int j = i +1; j < len;++j){
        double t = mat[j][i]/mat[i][i];
        for(int k = 0; k < wid;++k){
          mat[j][k] = mat[j][k] - t*mat[i][k];
        }
      }
    }
    double ans = 1;
    for(int i = 0; i < len;i++){
      ans *= mat[i][i];
    }
    return ans;
  }
};
bool operator==(matrix& a, matrix& b) {
  if (a.len == b.len && a.wid == b.wid) {
    return 1;
  }
  return 0;
}
matrix add(const matrix& a, const matrix& b) {
  matrix* tmp = new matrix(a.len, a.wid);
  for (int i = 0; i < a.len; ++i) {
    for (int j = 0; j < a.wid; ++j) {
      tmp->mat[i][j] = a.mat[i][j] + b.mat[i][j];
    }
  }
  return *tmp;
}
matrix multA(const matrix& a,int A){
  matrix tmp(a.len,a.wid);
  for(int i = 0; i < tmp.len;++i){
    for(int j = 0; j < tmp.wid ;j++){
      tmp.mat[i][j ] = a.mat[i][j]*A;
    }
  }
  return tmp;
}
matrix mult(const matrix& a,const matrix& b) {
  matrix tmp(a.len, b.wid);
  for (int i = 0; i < a.len; i++) {
    for (int j = 0; j < b.wid; ++j) {
      int temp = 0;
      for (int k = 0; k < a.len; ++k) {
        temp += a.mat[i][k] * b.mat[k][j];
      }
      tmp.mat[i][j] = temp;
    }
  }
  return tmp;
}

int main() {
  matrix m1;
  int tmp;
  cin >> tmp;
  matrix m2;
  // m1.print();
  // m2.print();
  multA(m1,tmp).print();
  if (m1 == m2) {
    add(m1, m2).print();
  }
  if (m1.wid == m2.len) {
    mult(m1, m2).print();
  }
  if(m1.len ==m1.wid){
    cout << m1.numb();
  }
  if(m2.len ==m2.wid){
    cout << m2.numb();
  }
  return 0;
}