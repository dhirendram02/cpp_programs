#include<iostream>
using namespace std;

int main()
{
        int mark[5], i;
        float sum=0,avg;

        
        for(i=0; i<5; i++)
        {
           
                cin>>mark[i];
                sum=sum+mark[i];
        }

        avg=sum/5;

     
        if(avg>80)
        {
                cout<<"[ A ]\n";
        }
        else if(avg>60 && avg<=80)
        {
                cout<<"[ B ]\n";
        }
        else if(avg>40 && avg<=60)
        {
                cout<<"[ C ]\n";
        }
        else
        {
                cout<<"[ D ]\n";
        }

        return 0;
}