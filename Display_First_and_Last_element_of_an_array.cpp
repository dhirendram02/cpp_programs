#include <iostream>
using namespace std;

int main()
{

    int i,a[50],size;
    cin>>size;

        for(i=0; i<size; i++)
        {
                cin>>a[i];
        }

    cout<<a[0]<<endl;
    
    cout<<a[size-1]<<endl;
    return 0;
}