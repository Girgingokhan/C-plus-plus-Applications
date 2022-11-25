#include <iostream>

using namespace std;

int main(){

  char karakter = 'Y';
  char *ch = &karakter;

  for (int i = 0; i <= 10; i++){
    cout << *(ch + i);
  }

  return 0;
}
