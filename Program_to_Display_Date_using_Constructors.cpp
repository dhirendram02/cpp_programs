#include<iostream>
using namespace std;

class date
{
    private:
        int dd, mm, yy;

    public:
        date()
        {
            dd=31;
            mm=12;
            yy=2016;
           
        }

        void display()
        {
            cout<<dd<<"-"<<mm<<"-"<<yy<<"\n";
        }
};
int main ()
{
date date1;
date1.display ();

return 0;
}