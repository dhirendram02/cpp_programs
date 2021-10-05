#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
if(a>=b && a>=c)
{
    cout<<"largest number are = "<<a<<"\n";
}
if(b>=a && b>=c)
{
    cout<<"largest number are = "<<b<<"\n";
}
if(c>=a && c>=b)
{
    cout<<"largest number are = "<<c<<"\n";
}

return 0;
}