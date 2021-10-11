#include <iostream>
using namespace std;

class hello
{
    public:
          void sayhello()
          {
              cout<<"hello world"<<endl;
          }
};
int main() {
    hello h;
    h.sayhello();
    return 0;
}