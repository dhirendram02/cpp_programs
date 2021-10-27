#include <iostream>
using namespace std;

int main() {
	int no,rev=0,r,n;
	cin>>n;
	no=n;
	while(no>0)
	{
	    r=no%10;
	    rev=rev*10+r;
	    no=no/10;
	    
	}
	cout<<rev;
	return 0;
}
