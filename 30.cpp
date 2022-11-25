// C++ kopyalayici fonksiyon örnegi

#include<iostream>
using namespace std;

class Daire
{
	private:
		double r;
		public:
		//yapici fonksiyonlar
		Daire();
		Daire(double x){ r=x;}
		//metot
		void yaz() {cout<<"r="<<r<<endl;}
		//kopyalayici fonksiyon
		Daire(Daire &d) {r=d.r;}
};

int main()
{
	Daire d1(2.3); // ilk nesne
	d1.yaz();      // üyeyi (r) yaz
	
	Daire d2=d1;  //ikinci nesne
	d2.yaz();     // ikinci nesnenin üyesini yaz (2)
	
	return 0;
}

