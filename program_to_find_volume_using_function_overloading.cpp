#include <iostream>
using namespace std;
float vol(int,int);
float vol(int,int);
int vol(int);

int main() {

   int r,h,a;
   float r1;
   cin>>r>>h;
   cin>>a;
   cin>>r1;
   cout<<"volume of cylinder is "<<vol(r,h);
   cout<<"\nVolume of cube is "<<vol(a);
   cout<<"\nVolume of sphere is "<<vol(r1);
   
	return 0;
	
}
float vol(int r,int h)
{
    return(3.14*r*r*h);
}
float vol(float r1)
{
    return((4*3.14*r1*r1*r1)/3);
    
}
int vol(int a)
{
    return(a*a*a);
}
