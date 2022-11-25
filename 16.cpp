/*
 Bir sinif i�inde yer alan bir degiskene baslangi� degeri atanmasi asagidaki yol izlenir.

-> Nesne olusturulur
-> Kurucu (Constructors) Fonksiyon �agrilir
-> Nesneye ait degiskenlere baslangi� degeri atanir(kurucu fonksiyon ile).

Bir nesne olusturuldugunda, o nesnenin kurucu fonksiyonu otomatik olarak �agrilir.
Yani nesne olusturuldugunda constructor sayesinde degiskenlere baslangi� degerleri atayabiliriz.
fonksiyon_adi();
//kurucu fonksiyon nesne yaratildiginda �agrilarak nesne i�indeki degiskenlere ilk deger atar.
~fonksiyon_adi();
//yok edici fonksiyon nesneyi yok ederek nesnenin bellekte isgal ettigi alani bosaltir.
Kurucu fonksiyon ait oldugu sinif ile ayni ismi tasir. 
Bu fonksiyon herhangi bir deger d�nd�rmez. Bunun anlami, kurucu fonksiyon return s�zc�g� i�ermez.

*/


#include <iostream>
using namespace std;
// Sinif tanimlaniyor..
class testSinif
{
   private:
      int a,b;
   public:
      testSinif(); //constructor , kurucu fonksiyon
     ~testSinif(); //destructor , yikici fonksiyon
      void goruntule();
};
// Kurucu fonksiyon..
testSinif::testSinif()
{
    a=10;
    b=20;
}
// Yok edici fonksiyon..
testSinif::~testSinif()
{
}
// Degisken degerlerini g�r�nt�ler..
void testSinif::goruntule()
{
   cout << a << "n";
   cout << b << "n";
}
int main()
{
   testSinif ts; //testSinif class'inin ts isimli nesnesi olusturuldu
                // ve constructor �agrildi.
   ts.goruntule();
return 0;
}
