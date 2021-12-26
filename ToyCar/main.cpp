#include "toyCar.h"
int main(){
  square s;
  srand((unsigned)time(NULL));
  for(int i = 0; i < rand()%12;i++)
  ++s;
  s.testcar();
}