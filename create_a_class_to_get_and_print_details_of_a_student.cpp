#include <iostream>
using namespace std;

class student{
    private:
        char name[30];
        int rollno;
        int total;
        float perc;
    public:
        void getdetails(void);
        void putdetails(void);
};
void student::getdetails(void){
    cin>>name;
    cin>>rollno;
    cin>>total;
    perc=(float)total/500*100;
}
void student::putdetails(void){

cout<<"student :\n";
cout<<"name :"<< name<<",rollno ="<<rollno<<",total:"<<total<<",perc:"<<perc;
}

int main() {
    student std;
    std.getdetails();
    std.putdetails();
	
	return 0;
}