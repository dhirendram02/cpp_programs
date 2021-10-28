#include <iostream>
using namespace std;

int main() {
	int n,i,arr[50],sum=0;
	cin>>n;
	
	for(i=0;i<n;i++)
	{
	    cin>>arr[i];
	    sum=sum+arr[i];
	}
	int armean=sum/n;
	cout<<"numbers="<<armean;
	return 0;
}
