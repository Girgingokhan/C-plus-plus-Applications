#include <iostream>
using namespace std;

// Sinif tanimlaniyor..
class testSinif
{
int a;
public:
testSinif(int sayi);
~testSinif();
void goruntule();
};
// Kurucu fonksiyon..
testSinif::testSinif(int sayi)
{
a=sayi;
}
// Yok edici fonksiyon..
testSinif::~testSinif()
{
}
// Degisken degerlerini görüntüler..
void testSinif::goruntule()
{
cout << a << "n";
}
int main()
{
//Kurucuya parametre gönderme islemi
testSinif ts(25); //ts nesnesi olusturulurken parametre olarak 25 degeri verildi
// ve constructor a o parametre olarak gönderildi.

ts.goruntule();
return 0;
}
