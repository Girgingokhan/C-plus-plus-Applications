/*
 Bir sinif içinde yer alan bir degiskene baslangiç degeri atanmasi asagidaki yol izlenir.

-> Nesne olusturulur
-> Kurucu (Constructors) Fonksiyon Çagrilir
-> Nesneye ait degiskenlere baslangiç degeri atanir(kurucu fonksiyon ile).

Bir nesne olusturuldugunda, o nesnenin kurucu fonksiyonu otomatik olarak çagrilir.
Yani nesne olusturuldugunda constructor sayesinde degiskenlere baslangiç degerleri atayabiliriz.
fonksiyon_adi();
//kurucu fonksiyon nesne yaratildiginda çagrilarak nesne içindeki degiskenlere ilk deger atar.
~fonksiyon_adi();
//yok edici fonksiyon nesneyi yok ederek nesnenin bellekte isgal ettigi alani bosaltir.
Kurucu fonksiyon ait oldugu sinif ile ayni ismi tasir. 
Bu fonksiyon herhangi bir deger döndürmez. Bunun anlami, kurucu fonksiyon return sözcügü içermez.

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
// Degisken degerlerini görüntüler..
void testSinif::goruntule()
{
   cout << a << "n";
   cout << b << "n";
}
int main()
{
   testSinif ts; //testSinif class'inin ts isimli nesnesi olusturuldu
                // ve constructor çagrildi.
   ts.goruntule();
return 0;
}
