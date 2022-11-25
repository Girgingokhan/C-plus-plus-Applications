#include <iostream>
class gunsinifi
{
public:
int gunsinifi_yil;
int gunsinifi_ay;
int gunsinifi_gun;
void yazdir()
{
std::cout << gunsinifi_yil << "/" << gunsinifi_ay << "/" << gunsinifi_gun;
}
};
int main()
{
gunsinifi bugun{ 2016,8,2 };
bugun.gunsinifi_yil = 2017;
bugun.yazdir();
system("pause");
return 0;
}
