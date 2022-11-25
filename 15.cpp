/*
Üye fonksiyonlarin, sinif disinda tanimlanmasi durumunda, bu fonksiyonun hangi sinifinin bir üyesi oldugunu da 
belirtmek gerekmektedir. Bunun için (::) islevinden yararlanilir.

geridönüstipi  sinif_adi:: fonksiyon_adi

Burada geri dönüþ tipi bizim  fonksiyonun prototipinde belirttigimiz dönüs tipi olacaktir . 
Mesela  sýnýf içinde    void  kareAl() ;  isimli bir fonksiyon prototipi bildirilmiþ olsun. 
Biz sinif disinda bu fonksiyonun içeriðini yazarken;


void sinif::kareal(){
…………………………….
   }

*/

#include <iostream>

using namespace std;

const float PI = 3.14159;
// Bir küre sinifi
class Kure
{
   public:
     float r;
     float x, y, z;
     float alan(); // burada sadece prototip yazildi.içerigi sonra tanimlanacak.
     float hacim(); // bu durumda fonksiyon inline olmayacak ...
}k;

// Kürenin hacmi..
float Kure::hacim()
{
       return (r*r*r*4*PI / 3);
}
// Kürenin alani..
float Kure::alan()
{
      return (r * r * 4 * PI);
}

int main()
{
    k.r=1.0;
    k.x=2.0;
    k.y=3.0;
    k.z=4.0;
    cout << "X = " << k.x
    << ", Y = " << k.y
    << ", Z = " << k.z
    << ", R = " << k.r << "n"
    << "Alan =" << k.alan() << "n"
    << "Hacim=" << k.hacim() << "n";
return 0;
}
