// c++ daire alanini hesaplama

#include<iostream>
using namespace std;

// Daire adinda bir sinif olusturuyoruz
class Daire
{
	//burada tanimlayacaklarimiz sinif disinda okunmaz
	private:
	//pi degiskenini sadece içerdeki kodlar görsün istiyorum
	const double pi=3.14;
	
	//burada tanimlananlar sinif disinda da okunabilir
	public:
	//r degiskeni ve alan() fonksiyonuna disaridan da erisilebilir
	double r;
	double alan(double r)
	{
		return pi*r*r;
	}			
};
int main()
{
	// Daire sinifindan d adli bir nesne olusturuyorum
	Daire d;
	cout<<"yaricap giriniz:"; cin>>d.r;
	cout<<"alan="<<d.alan(d.r);
	
	return 0;
}
