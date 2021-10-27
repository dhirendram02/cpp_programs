#include <iostream>
using namespace std;
void reverse_arr(int arr[],int size);


int main() {
    int i,a[50],size;
    cin>>size;
    
    for(i=0;i<size;i++)
    {
        cin>>a[i];
    }
    reverse_arr(a,size);
    for(i=0;i<size;i++)
    {
        cout<<" "<<a[i]<<" ";
    }
    cout<<"\n";
	return 0;
}
void reverse_arr(int arr[],int size)
{
    int temp;
    size--;
    for(int i=0;size>=i;size--,i++)
    {
        temp=arr[i];
        arr[i]=arr[size];
        arr[size]=temp;
    }
}
