#include <iostream>

int main() {
  int a = 0;
  int b = 0;

  a = 5;
  b = a;
  a = b + 5;

  if (a == 5) {
    b = b + 2;
  }
  
}