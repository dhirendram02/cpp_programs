#include <iostream>
#include<string.h>
using namespace std;

int main() {
   char str[50],str1[50];
   int i;
   gets(str);
   strcpy(str1,str);
   for(i=0;i<=strlen(str);i++)
   {
       if(str[i]>=97 && str[i]<=122)
       {
           str[i]=str[i]-32;
       }
   }
   cout<<"in uppercase"<<str;
	return 0;
}
