#include <iostream>
using namespace std;

int fact(int n)
{
    int i;
     for(i= n-1;i>1;i--)
        n=n*i;
        
        return n;
        
}
int main() {
    
    int n,r,result;
    
    cin>>n;
    cin>>r;
    result = fact(n)/(fact(r)*fact(n-r));
    cout<<result;
    
	return 0;
}
