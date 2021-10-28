#include <iostream>
#include <string.h>
using namespace std;

int main() {
	int i,j=0,k=0,count = 0;
	char str[100],str1[10][20],alph[20];
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
	    if(str[i]==' ')
	    {
	        str1[k][j] = '\0';
	        k++;
	        j=0;
	    }
	    else
	    {
	        str1[k][j]=str[i];
	        j++;
	    }
	}
	str1[k][j]='\0';
	cin>>alph;
	
	for(i=0;i<k+1;i++)
	{
	    if(strcmp(str1[i],alph) == 0)
	    {
	        for(j=1;j<k+1;j++)
	        {
	            strcpy(str1[j],str1[j+1]);
	            k--;
	        }
	    }
	}
	for(i=0;i<k+1;i++)
	{
	    cout<<str1[i]<<" ";
	}
	cout<<"\n";
    
	return 0;
}
