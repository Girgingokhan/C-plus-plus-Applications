// c++ char özelligi ile ilgili örnek

#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	class personel
	{
		public:
        char ad[30];
        char soyad[30];
        char tckn[12];
	};
personel Gokhan={"Gokhan","Girgin","123456789"};

personel osman;
osman=Gokhan;

cout<<osman.ad<<endl;
cout<<osman.soyad<<endl;
cout<<osman.tckn<<endl;

return 0;
}
