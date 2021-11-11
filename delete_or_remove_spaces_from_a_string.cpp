#include <iostream>
#include<string.h>
using namespace std;

int main() {
	char str[100],str1[100];
	int i=0,len,j;
	
	gets(str);
	
	strcpy(str1,str);
	
	len=strlen(str);
	
	for(i=0;i<len;i++)
	{
	    if(str[i]==' ')
	    {
	        for(j=i;j<len;j++)
	        {
	            str[j]=str[j+1];
	        }
	        len--;
	    }
	}
	cout<<str1<<"after removing spaces = "<<str<<"\n";
	return 0;
}