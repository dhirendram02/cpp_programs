#include <iostream>
#include<string>
using namespace std;

class student
{
    public:
        int rollno;
        string stdname;
        float perc;
};
int main() {
    student std1,std2;
    std1.rollno=101;
    std1.stdname= "ravi";
    std1.perc=95.11;

    std2.rollno=11;
    std2.stdname= "sunny";
    std2.perc=99.9;
    
    cout<< "student 1  "<<"\n";
    cout<< "student roll number:"<< std1.rollno<<"\n";
     cout<< "student name:"<< std1.stdname<<"\n";
      cout<< "student percent:"<< std1.perc<<"\n";
    
    cout<< "student 2  "<<"\n";
    cout<< "student roll number:"<< std2.rollno<<"\n";
     cout<< "student name:"<< std2.stdname<<"\n";
      cout<< "student percent:"<< std2.perc<<"\n";
    
    return 0;
}
