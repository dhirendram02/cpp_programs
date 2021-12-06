#include<iostream>
using namespace std;

int main()
{
    float ar,peri,width,height=0;
    cin>>width;
    cin>>height;
    peri=2*(width+height);
    ar=height*width;
    cout<<"area of the rectangle is = "<<ar<<endl;
    cout<<"perimeter of the rectangle is = "<<peri<<"\n";
}