#include <iostream>
using namespace std;

class test{
    private:
     int a;
    public:
      test()
      {
          cout<<"object is created"<<endl<<endl;
          
      }
      ~test()
      {
          cout<<"object is destroyed"<<endl<<endl;
          
      }
};
int main() {
	 
	 test *p1=new test;
	 test *p2=new test;
	 
	 delete p1;
	 delete p2;
	 
	return 0;
}
