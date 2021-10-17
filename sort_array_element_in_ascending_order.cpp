#include <iostream>
using namespace std;

int main() {
    int i,j,temp,arr[50],size;
    cin>>size;
    
    for(i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<size;i++)
    {
    for(j=0;j<size;j++)
    {
        if(arr[j]>arr[j+1])
        {
        temp=arr[j];
        arr[j]=arr[j+1];
        arr[j+1]=temp;
    }
 }
}

for(i=0;i,size;i++)
{
    cout<<" "<<arr[i]<<" ";
}
cout<<"\n";
return 0;
}