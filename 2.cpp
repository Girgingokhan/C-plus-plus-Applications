//C++ diziler konusu ile ilgili örnek

#include<iostream>
using namespace std;

class Daire
{
	public:
		double r;
		double alan(double r)
		{
			return 3.14*r*r;
		}
};

int main()
{
	//d0,d1,d2,d3,d4 adli 5 adet Daire nesnesi olusturulacak
	Daire d[5];
	int i=0;
	
	//her nesneye r verisini atayalim
	for(i=0; i<5; i++)
	d[i].r=i;
	
	//her nesnenin alanini yazdiralim
	for(i=0; i<5; i++)
	cout<<"d["<<i<<"] alani="<<d[i].alan(d[i].r)<<endl;
	
	return 0;
}
