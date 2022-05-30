#include <iostream>
using namespace std;

class swap{
    int a,b;
    public:
    void getvalue();
    void swapnumber();
    void display();
};
void swap::getvalue(){
    cin>>a>>b;
}
void swap::swapnumber(){
    a = a+b;
    b=a-b;
    a=a-b;
}
void swap::display()
{
    cout<<a<<"\n"<<b;
}
int main() {
	swap s;
	s.swapnumber();
	s.display();
	return 0;
}
