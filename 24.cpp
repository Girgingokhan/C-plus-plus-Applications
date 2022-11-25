// class yardimiyla karakter eklemek ve silmek

#include <iostream>
using namespace std;

class katar{
    public:
        katar();
        int getYer();
        void setYer(int x);
        void harfEkle(char c);
        void harfCikar();
        void yaz();
    private:
        char depo[20];
        short int yer;
};

katar::katar()
{
    cout<<"depo temizle\n";
    for(int i=0;i<20;i++)
        {depo[i]='_';}
    depo[19]=NULL;
    yer=0;
}

void katar::setYer(int x)
{
    if(yer>=0 && yer<20)
       {
          yer=x;
       }
    else cout<<"sinir tasmasi";
}

int katar::getYer()
{
    return yer;
}

void katar::harfEkle(char c)
{
    depo[yer]=c;
    setYer(yer+1);
}

void katar::harfCikar()
{
    setYer(yer-1);
    depo[yer]=' ';
}

void katar::yaz()
{
    cout<<depo<<endl;
}

int main()
{
    katar kutur;
    kutur.harfEkle('Y');
    kutur.harfEkle('E');
    kutur.harfEkle('S');
    kutur.harfEkle('i');
    kutur.harfEkle('M');
    kutur.yaz();
    kutur.setYer(11);
    kutur.harfEkle('c');
    kutur.yaz();
    kutur.harfCikar();
    kutur.harfCikar();
    kutur.yaz();
    return 0;
}
