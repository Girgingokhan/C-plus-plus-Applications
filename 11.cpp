#include <iostream>
class gun_sinifi
{
int yil, gun, ay;
public:
void zaman_kur(int _yil,int _gun,int _ay)
{
yil = _yil;
gun = _gun;
ay = _ay;

}
void ekrana_bas() {
std::cout << yil << "/" << gun << "/" << ay;

}
};

int main()
{
gun_sinifi gun_nesnesi;
gun_nesnesi.zaman_kur(2016, 2, 8);
gun_nesnesi.ekrana_bas();
system("pause");
return 0;
}
