#include<iostream>
#include<cstdlib>

using namespace std;

int main()
{
    int i,j,temp;
    char str[100];
    char substr[30];
    gets(str);
    gets(substr);

    for(i=0;str[i]!='\0';i++)
    {
        j=0;
        if(str[i]==substr[j])
        {
            temp=i+1;
            while(str[i]==substr[j])
            {
                i++;
                j++;
            }

            if(substr[j]=='\0')
            {
                cout<<substr <<temp;
                exit(0);
            }
            else
            {
                i=temp;
                temp=0;
            }
        }
    }

    if(temp==0)
        cout<<substr;

    return 0;
}