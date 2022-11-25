/*
Programlama dillerinde bir fonksiyon veya programin bir parçasinin farkli degisken tipleri için kulllanilmasini saglarlar.
  
template<typename T>
template<class T>

Yukaridaki ilk satirda bir tip ile sablon (template) tanimliyken ikinci satirda bir sinif(class) ile sablon tanimlanmistir.

Yani kullanilacak olan sablona T ismi verilmis ve bu sablonun tipi bir ilkel veri tipi (primitive data type) (int,char, float gibi)
ile tanimlanmis veya bir sinif (class) kullanilarak tanimlanmistir.

Nesne yönelimli programlama dillerinde kullanilan sablonlar, ikiye ayirmak mümkündür.         

Fonksiyon sablonlari (Function Templates)
Sinif sablonlari (Class Templates)

template <class degisken> fonksiyontanimi;
template <typename degisken> fonksiyontanimi;

C++ dilinde 4 farkli tip için (int, double, string ve boolean) degeri ekrana basan bir fonksiyon 
ve bu fonksiyonu kullanan kod verilmistir.
*/
                                                      
#include<iostream>
#include<string>

using namespace std;

template<typename T>
void yazdir(T deger)
{
	cout << "deger : " << deger << endl;
}

int main()
{
	int    i=5;
	double d=5.5;
	string s("Merhaba Dunya");
	bool   b=true;

	yazdir(i); // T int
	yazdir(d); // T double
	yazdir(s); // T string
	yazdir(b); // T bool
	return 0;
}
