#include <iostream>
using namespace std;

const float PI = 3.14159;
// Bir k�re sinifi..
class Kure
{
   public:
     float r;
     float x, y, z;
// K�renin hacmini hesaplayan fonksiyon ... inline, yani class i�inde taimi yaptik.
float hacim(){
     return (r*r*r*4*PI / 3);
}
// K�renin alani..(inline fonksiyon)
float alan(){
     return (r * r * 4 * PI);}

}k;      // k bir nesne

int main()
{
      k.r=1.0;
      k.x=2.0;
      k.y=3.0;
      k.z=4.0;
      cout << "X = " << k.x
      << ", Y = " << k.y
      << ", Z = " << k.z
      << ", R = " << k.r << "n"
      << "Alan =" << k.alan() << "n"
      << "Hacim=" << k.hacim() << "n";
return 0;
}  
