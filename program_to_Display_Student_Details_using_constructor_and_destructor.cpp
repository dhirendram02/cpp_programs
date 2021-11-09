#include<iostream>
using namespace std;

class stu
{
                private:
                    char name[20],add[20];
                        int roll,zip;

                public:
                    stu ();//Constructor
                        ~stu();//Destructor
                        void read();
                        void disp();
};

stu :: stu()
{
        cout<<"\nThis is Student Details "<<endl;
}

void stu :: read()
{
        cin>>name;
       
        cin>>roll;
     
        cin>>add;
       
        cin>>zip;
}

void stu :: disp()
{
  
        cout<<"\nStudent Name :: "<<name<<endl;
        cout<<"\nRoll no   is :: "<<roll<<endl;
        cout<<"\nAddress is :: "<<add<<endl;
        cout<<"\nZipcode is :: "<<zip;
}

stu :: ~stu()
{
        cout<<"\n\nStudent Detail is Closed\n";
}


int main()
{
        stu s;
    s.read ();
    s.disp ();

    return 0;
}
