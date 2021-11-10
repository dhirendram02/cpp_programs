#include <iostream>
using namespace std;

int main() {
	 
	 string s;
	 char k;
	 int i,c=0;
	 cin>>s;
	 cin>>k;
	 
	 for(i=0;i<s.size();i++)
	 {
	     if(s[i]==k)
	       c++;
	 }
	 cout<<k<<" occurs "<<c<<" times "<<endl;
	return 0;
}
