#include <iostream>
using namespace std;

class sample
{
    public:
        void printtext()
        {
            cout<<"hello world\n";
        }
         void printtext2()
        {
            cout<<"class must be used\n";
        }
         void printvalue(int value)
        {
            cout<<"value = "<<value<<"\n";
        }
};
int main() {
   sample obj;
   obj.printtext();
   obj.printtext2();
   obj.printvalue(1000);
   
    return 0;
}
