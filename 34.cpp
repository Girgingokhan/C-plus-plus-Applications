// C++ yapici fonksiyon ile ilgili bir �rnek

#include<iostream>
using namespace std;

// Daire adli bir sinif olusturalim
class Daire
{
	public:
	double r;
	
	void oku(double yaricap){
	r=yaricap;
	}
	
	double alan(double r){
	return 3.14*r*r;
	}
};

int main()
{
	//Daire sinifindan d adli bir nesne olusturalim
	Daire d;
	//d.r=2; // birinci y�ntem
	d.oku(2); // ikinci y�ntem
	cout<<"alan="<<d.alan(d.r);
	
	return 0;
}
