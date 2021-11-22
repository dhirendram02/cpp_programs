#include<iostream>
using namespace std;

class calculation{
    int va1,va2;
    public:
    void operation()
    {
        va1=50;
        va2=34;

        cout<<"sum = "<<va1+va2<< \n;
        cout<<"substration = "<<va1-va2<< \n;
        cout<<"multiplication = "<<va1*va2<< \n;
        cout<<"division = "<<va1/va2<<endl;
    }
};

int main()
{
    calculation obj;
    obj.operation();
    return 0;
}