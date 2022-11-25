#include <iostream>
#include <string>

class isciler
{
public:
std::string isim;
int yas,int kilo;

void ekrana_bas()
{
std::cout << " isim: "<< isim <<" yas: " << yas << " kilo " << kilo << '\n';
}

};

int main()
{
isciler volkan{ "volkan",21,70 };
isciler irem{ "irem",21,47 }; 
volkan.ekrana_bas();
irem.ekrana_bas();
system("pause");
return 0;
}
