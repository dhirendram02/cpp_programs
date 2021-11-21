#include <iostream>
using namespace std;

class object{
    int a,b;
    public:
      object(int x,int y)
      {
          a=x;
          b=y;
          
         cout<<"it is constructor";
      }
      object(const object& obj)
      {
          a=obj.a;
          b=obj.b;
           cout<<"it is copy constructor";
      }
      void display(){
          cout<<"value: "<< a<<"\t"<<b;
      }
};
int main() {
  object sample(10,20);
  object sample2(sample);
  object sample3 = sample;
  
  sample.display();
  sample2.display();
  sample3.display();
	return 0;
}
