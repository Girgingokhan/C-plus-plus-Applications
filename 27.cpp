//C++ arkadas  (friend) fonksiyon kullanma örnegi

#include<iostream>
using namespace std;

class Daire
{
	private:
		double r;
		
	public:
		//alan fonksiyonu bu sinifin private: üyelerine erisebilirsin
	friend void alan();
};

void alan()
{
	//daire sinifindan d adli bir nesne olusturalim
	Daire d;
	
	//fonksiyon arkadas oldugu için private:r üyesine erisebilir
	cout<<"r="; cin>>d.r;
	cout<<"alan="<<3.14*d.r*d.r;
}

int main()
{
	alan();// alan fonksiyonu çalisiyor.
	return 0;
}
