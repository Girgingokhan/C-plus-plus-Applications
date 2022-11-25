#include <iostream>


class kapsul_test
{
	private:
	int deger[3];
	public:
		
	void deger_ata(int _deger)
	{
     deger[0] = _deger;
	}
	
	int degeri_goster()
	{
	  return deger[0];
	}
};

int main()
{
kapsul_test kapsul;
kapsul.deger_ata(20);
std::cout << kapsul.degeri_goster() << '\n';
system("pause");
return 0;

}
