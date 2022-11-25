// C++ silindir hacmi hesaplama programi örnegi
#include<iostream>
using namespace std;

class silindir
{
	private:
		
	double r,h;
	const double pi=3.14;
	
	public:
		
	void oku_r(double yaricap)
	{
		r=yaricap;
	}
	void oku_h(double yukseklik)
	{
		h=yukseklik;
	}
	double hacim() {
		return pi*r*r*h; 
	}
};

int main()
{
	silindir s;
	s.oku_r(1);
	s.oku_h(2);
	cout<<"silindirin hacmi="<<s.hacim();
	return 0;
}
