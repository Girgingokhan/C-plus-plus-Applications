#include <iostream>
class constructor_sinifi
{
private:
int deger, deger_bir;
public:
	
constructor_sinifi() //burada kurduk.
{
deger = 0;
deger_bir = 1;
}

int deger_cek(){
return deger;
}

int deger_bir_cek()
{
return deger_bir;
}

};

int main()
{
constructor_sinifi test;
std::cout << test.deger_bir_cek();
std::cout << '\n';
std::cout << test.deger_cek();
system("pause");
return 0;
}


