#include <iostream>
#include<cstring>
using namespace std;

class bilgiler{
    public:
        void sakla(char *a,char *res);
        void goster();
    private:
        char ad[20];
        char adres[20];
};

void bilgiler::sakla(char *a,char *res)
{
    strcpy(ad,a);
    strcpy(adres,res);
}

void bilgiler::goster()
{
    cout<<"adiniz: "<<ad<<endl;
    cout<<"adres:"<<adres;
}

int main()
{
    char ad[20];
    cout<<"isminizi girin:";
    cin>>ad;
    cout<<" karakter uzunluk:"<<strlen(ad)<<endl;

    bilgiler kisi1;
    kisi1.sakla(ad,"girgin");
    kisi1.goster();
    cout<<"\n\n";
    return 0;
}
