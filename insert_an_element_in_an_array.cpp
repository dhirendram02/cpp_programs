#include<iostream>
using namespace std;
int main()
{
    int arr[6], i, elem;
    for(i=0; i<5; i++)
        cin>>arr[i];
    cin>>elem;
    arr[i] = elem;
    
    for(i=0; i<6; i++)
        cout<<arr[i]<<"  ";
    cout<<endl;
    return 0;
}