#include<iostream>
using namespace std;

class Cizgi
{
	private:
		int *ptr;
	public:
		// yapici fonk.
	Cizgi(int uzunluk)
	{
		cout<<"Yapici ile bellek ayirma"<<endl;
		//gösterici için bellek ayirma
		ptr=new int;
		*ptr=uzunluk;
	}
	//kopyalayici fonksiyon
	Cizgi(const Cizgi &nes)
	{
		cout<<"Kopyalayici ile belek ayirma"<<endl;
		ptr=new int;
		*ptr=*nes.ptr; //degeri kopyala
	}
	//yikici fonksiyon
	~Cizgi()
	{
		cout<<"bellek bosaltiliyor"<<endl;
		delete ptr;
	}
	void goster(Cizgi nes)
	{
		cout<<"Cizgi uzunlugu:"<<nes.yazUzunluk() <<endl;
		
	}
	int yazUzunluk(void)
	{
		return *ptr;
	}
};

int main()
{
	//yapici fonksiyon ile nesne degeri atama
	Cizgi c1(10);
	//kopyalayici ile nesne degeri atama
	Cizgi c2=c1;
	c1.goster(c1);
	c2.goster(c2);
	
	return 0;
}
