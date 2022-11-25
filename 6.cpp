#include <iostream>

using namespace std;

int degerFonksiyonu(int sayi){
  sayi = 1453;
}

int referansFonksiyonu(int *sayi){
  *sayi = 1453;
}

int main(){

  int sayi = 10;

  degerFonksiyonu(sayi);
  cout << sayi << endl;

  referansFonksiyonu(&sayi);
  cout << sayi << endl;

  return 0;
}
