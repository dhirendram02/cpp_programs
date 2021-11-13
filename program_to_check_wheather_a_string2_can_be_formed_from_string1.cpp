#include <iostream>
using namespace std;

int main() {
	string s1,s2;
	cin>>s1;
	cin>>s2;
	
	int i,count1[50]={0},count2[50]={0};
	
	bool ans=true;
	
	for(i=0;i<s2.size();i++)
	 count2[s2[i]-'A']++;
	 for(int i=0;i<58;i++)
	 {
	     if(count1[i]<count2[i])
	     {
	         ans=false;
	         break;
	     }
	 }
	 if(ans)
	    cout<<"yes"<<endl;
	 else
	    cout<<"no"<<endl;
	return 0;
}
