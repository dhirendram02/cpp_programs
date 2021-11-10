#include <iostream>
using namespace std;

int main()
{
    int a[10][10],i,j,m;
    cin>>m;
    for(i=0;i<m;i++)
        for(j=0;j<m;++j)
            cin>>a[i][j];

    cout<<"\n\n";
    for(i=0;i<m;++i)
    {
        for(j=0;j<m;++j)
        {
            if(i<j)
                cout<<a[i][j]<<" ";
            else
                cout<<"  ";
        }

        cout<<"\n";
    }

    cout<<"\n";

    for(i=0;i<m;++i)
    {
        for(j=0;j<m;++j)
        {
            if(j<i)
                cout<<a[i][j]<<" ";
            else
                cout<<" ";
        }
        cout<<"\n";
    }

    return 0;
}