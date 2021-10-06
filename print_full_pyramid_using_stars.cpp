#include<iostream>
using namespace std;

int main(){
    int rows,spc;
    cin>>rows;
    for(int i=1,k=0;i<=rows;++i,k=0)
    {
        for(spc =1;spc<=rows-1;++spc)
        {
            cout<<" ";
            
        }
        while(k!=2*i-1)
        {
            cout<<"* ";
            ++k;
        }
        cout<<endl;
    }
    return 0;
}