//Bir Nesneyi Diger Nesneye Atamak

#include <iostream>
using namespace std;
// Sinif tanimlaniyor..
class testSinif {
int i;
public:
void ata(int n)
{
   i=n;
}
int deger()
{
 return i;
}
};

int main()
{
     testSinif n1, n2;
     n1.ata(1324);
    // Bir nesne digerine kopyalaniyor..
     n2=n1;
    cout << "Birinci nesne degeri=" << n1.deger()
    << "n";
    cout << "Ikinci nesne degeri=" << n2.deger()
    << "n";
return 0;
}
