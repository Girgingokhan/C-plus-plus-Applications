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
// Degisken degerlerini g�r�nt�ler..
void testSinif::goruntule()
{
cout << a << "n";
}
int main()
{
//Kurucuya parametre g�nderme islemi
testSinif ts(25); //ts nesnesi olusturulurken parametre olarak 25 degeri verildi
// ve constructor a o parametre olarak g�nderildi.

ts.goruntule();
return 0;
}
