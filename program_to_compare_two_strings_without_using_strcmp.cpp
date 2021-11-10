#include <iostream>
#include<string.h>
using namespace std;

int main() {
    char str1[50],str2[50],i=0,j=0,temp=0;
    gets(str1);
    gets(str2);
    
     while(str1[i]!='\0')
     {
         i++;
     }
     while(str2[j]!='\0')
     {
         j++;
     }
     if(i!=j)
     {
         temp=0;
     }
     else
     {
         for(i=0,j=0;str1[i]!='\0',str2[j]!='\0';i++,j++)
         {
             if(str1[i]==str2[j])
             {
                 temp=1;
             }
         }
     }
     if(temp==0)
     {
         cout<<"string are not equal.\n";
     }
     else
     {
         cout<<"string are equal.\n";
     }
	 
	return 0;
}
