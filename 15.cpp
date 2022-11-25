/*
�ye fonksiyonlarin, sinif disinda tanimlanmasi durumunda, bu fonksiyonun hangi sinifinin bir �yesi oldugunu da 
belirtmek gerekmektedir. Bunun i�in (::) islevinden yararlanilir.

gerid�n�stipi  sinif_adi:: fonksiyon_adi

Burada geri d�n�� tipi bizim  fonksiyonun prototipinde belirttigimiz d�n�s tipi olacaktir . 
Mesela  s�n�f i�inde    void  kareAl() ;  isimli bir fonksiyon prototipi bildirilmi� olsun. 
Biz sinif disinda bu fonksiyonun i�eri�ini yazarken;


void sinif::kareal(){
�����������.
   }

*/

#include <iostream>

using namespace std;

const float PI = 3.14159;
// Bir k�re sinifi
class Kure
{
   public:
     float r;
     float x, y, z;
     float alan(); // burada sadece prototip yazildi.i�erigi sonra tanimlanacak.
     float hacim(); // bu durumda fonksiyon inline olmayacak ...
}k;

// K�renin hacmi..
float Kure::hacim()
{
       return (r*r*r*4*PI / 3);
}
// K�renin alani..
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
