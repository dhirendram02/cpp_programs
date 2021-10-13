#include <iostream>
#include <string.h>

using namespace std;

class marks
{
    private:
      int rollno;
      float perc;
      
    public:
    marks()
    {
        rollno = 0;
        perc=0.0f;
    }
    
    void readmarks(void)
    {
        cin>>rollno;
        cin>>perc;
    }
    void printmarks(void)
    {
        cout<<"roll no :"<<rollno<<endl;
        cout<<"percentage :"<<perc<<"%"<<endl;
        
    }
};
class student
{
    private:
      marks objm;
      char name[30];
      
    public:
    
    void readstudent(void)
    {
        cin.getline(name, 30);
        objm.readmarks();
    }
    void printstudent(void)
    {
        cout<<"name : "<<name<<endl;
        objm.printmarks();
        
    }
};


int main() {
    student std;
    std.readstudent();
    std.printstudent();
	
	return 0;
}
