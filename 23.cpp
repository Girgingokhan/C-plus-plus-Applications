/*
Timer tipinde bir nesne tanimliyoruz sonra da nesnenin olusma ve bitme arasinda gecen süreyi bulduruyoruz.
*/

#include <iostream>
#include <ctime>

using namespace std;

class timer{
    public:
        timer();
        ~timer();
    private:
        clock_t start;
};

timer::timer()
{
    start=clock();
}

timer::~timer()
{
    clock_t end;
    end=clock();
    cout<<"gecen zaman: "<< (end-start)/CLOCKS_PER_SEC<<" saniye \n";
}

int main()
{
    timer ob;
    char c;
    cout << "bir tusa sonrada entere basin:" << endl;
    cin>>c;
    return 0;
}

