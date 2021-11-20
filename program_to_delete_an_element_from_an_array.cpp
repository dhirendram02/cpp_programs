#include <iostream>
using namespace std;

int main() {
	int arr[100],tot,i,j,elem,found=0;
	cin>>tot;
	for(i=0;i<tot;i++)
	  cin>>arr[i];
	cin>>elem;
	for(i=0;i<tot;i++)
	{
	    if(arr[i]==elem)
	    {
	        for(j=i;j<(tot-1);j++)
	           arr[j] = arr[j+1];
	       found=1;
	       i--;
	       tot--;
	       
	    }
	}
	if(found==0)
	    cout<<"\nelement does not found in array";
	else
	{
	    cout<<"\nelement deleted successfully";
	    cout<<"\n new array is :";
	    for(i=0;i<tot;i++)
	      cout<<arr[i]<<" ";
	}
	cout<<endl;
	return 0;
}
