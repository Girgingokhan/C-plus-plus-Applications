//Fonksiyonlara nesne atama yoluyla sayisal degerlerin karesini bulmak

#include <iostream>
using namespace std;
// Sinif tanimlaniyor..

class testSinif {
	int sayi;
	public:
		
	testSinif(int n){
	sayi=n;
	}

	int deger(){
		return sayi;
	}
};

// Kare alma islemi..
int kare(testSinif d)
{
return d.deger()*d.deger();
}
int main()
{

// Karesi alinacak degerler..
testSinif a(9), b(11);
cout << kare(a) << "n";
cout << kare(b) << "n";
return 0;
}
