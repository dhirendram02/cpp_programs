#include <iostream>
using namespace std;

int main() {
 char line [100];
 int vowels,consonant,digits,space;
 
 vowels=consonant=digits=space=0;
 cin.getline(line,100);
   
   for(int i=0;line[i]!='\0';++i)
   {
       if(line[i]=='a'||line[i]=='e'||line[i]=='i'||line[i]=='o'||line[i]=='u'||line[i]=='A'||line[i]=='E'||line[i]=='I'||line[i]=='O'||line[i]=='U')
       {
           ++vowels;
       }
       else if((line[i]>='a'&&line[i]<='z')||(line[i]>='A'&&line[i]<='Z'))
       {
           ++consonant;
       }
       else if(line[i]>='0'&&line[i]<='9')
       {
           ++digits;
       }
       else if(line[i]==' ')
       {
           ++space;
       }
   }
   cout<<"vowels:"<<vowels<<endl;
    cout<<"consonant:"<<consonant<<endl;
     cout<<"digits:"<<digits<<endl;
      cout<<"space:"<<space<<endl;
	return 0;
}
