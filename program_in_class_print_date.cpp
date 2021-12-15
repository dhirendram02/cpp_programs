#include<iostream>
using namespace std;

class date
{
    private:
     int d;
     int mm;
     int yy;

    public:
      date(){
      int d=22;
     int  mm=12;
      int yy=2018;
      }
    void display(){
        cout<<d<<"-"<<mm<<"-"<<yy;
    }
};
int main()
{
    date obj;
    obj.display();
    return 0;
}