#include<iostream>
using namespace std;

 int main()
 {
     int n,num,a=0;
     cin>>n;
     num=n;
     while(num>0)
     {
         num=num/10;
         a++;
     }
     cout<<"number is = "<<a<<"\n";

     return 0;
 }