#include <iostream>
using namespace std;

int main() {
	int r,c,a[100][100], transpose[100][100],i,j;
	cin>>r;
	cin>>c;
	
	for(i=0;i<r;i++){
	    for(j=0;j<c;j++)
	    {
	        cin>>a[i][j];
	    }
	}
	    
    cout<<"print the matrix\n";	    	
	for(i=0;i<r;i++){
	    for(j=0;j<c;j++)
	    {
	       cout<<" "<<a[i][j];
	       if(j==c-1)
	       cout<<endl<<endl;
	    }
	}
	//transpose of matrix 
	for(i=0;i<r;i++)
	    for(j=0;j<c;j++)
	    {
	       transpose[j][i]=a[i][j];
	    }

cout<<"print the transpose matrix\n";
	  for(i=0;i<r;i++)
	    for(j=0;j<c;j++)
	    {
	       cout<<" "<<transpose[i][j];
	       if(j==r-1)
	       cout<<endl<<endl;
	    }
	
	
	return 0;
}
