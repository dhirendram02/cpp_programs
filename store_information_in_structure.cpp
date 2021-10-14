#include <iostream>
using namespace std;

struct student 
{
    char name[50];
    int roll;
    float marks;
}s[10];
int main() {
    
    for(int i=0;i<10;++i)
    {
        s[i].roll=i+1;
        cin>>s[i].name;
        cin>>s[i].marks;
        cout<< endl;
    }
    
    for(int i=0;i<10;++i)
    {
        cout<<"\nroll number:" <<i+1<<endl;
        cout<<"name :" <<s[i].name<<endl;
        cout<<"marks :" <<s[i].marks<<endl;
        
    }
	
	return 0;
}
