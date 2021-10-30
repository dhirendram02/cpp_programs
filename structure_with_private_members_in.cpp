#include <iostream>
using namespace std;

struct student
{
    private:
       int rno;
       float perc;
    public:
       void read(void)
       {
           cin>>rno;
           cin>>perc;
       }
       void print(void)
       {
           cout<<endl;
           cout<<rno<<endl;
           cout<<perc<<"%"<<endl;
       }
};
int main() {
     struct student std;
     
     std.read();
     std.print();
	return 0;
}
