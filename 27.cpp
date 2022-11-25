//C++ arkadas  (friend) fonksiyon kullanma �rnegi

#include<iostream>
using namespace std;

class Daire
{
	private:
		double r;
		
	public:
		//alan fonksiyonu bu sinifin private: �yelerine erisebilirsin
	friend void alan();
};

void alan()
{
	//daire sinifindan d adli bir nesne olusturalim
	Daire d;
	
	//fonksiyon arkadas oldugu i�in private:r �yesine erisebilir
	cout<<"r="; cin>>d.r;
	cout<<"alan="<<3.14*d.r*d.r;
}

int main()
{
	alan();// alan fonksiyonu �alisiyor.
	return 0;
}
