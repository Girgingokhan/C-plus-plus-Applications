#include <iostream>
using namespace std;
class myclass{
    public:
        myclass();//constructer
        ~myclass();//destructer
        void show();
    private:
    int a;
};
myclass::myclass()
{
    cout<<"constructor'da\n";
    a=10;
}
myclass::~myclass()
{
    cout<<"yok ediliyor...\n";
}
void myclass::show()
{
    cout<<a<<endl;
}


int main()
{
    myclass ob;
    ob.show();
    return 0;
}
