#include <iostream>
using namespace std;

int main() {
	int arr[5][5],a=0,b=0,i,j,n;
	cin>>n;
	
	for(i=0;i<n;++i)
	{
	  for(j=0;j<n;++j)
	  {
	   cin>>arr[i][j];
	  }
	}
}
 for(i=0;i<n;++i)
 {
	  for(j=0;j<n;++j)
	  {
	   if(j<i)
	   {
	    a+=arr[i][j];
	   }
	    else
	    {
	        if(i>j)
	        {
	          b+=arr[i][j];
	        }
	    }
	  }
 }
	  cout<<"\nsum of above diagonal:"<<a;
	  cout<<"\nsum of below diagonal:"<<b;
	  
	return 0;
}
