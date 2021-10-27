#include <iostream>
using namespace std;

class time{
    private:
        int hours;
        int minutes;
        int seconds;
        
    public:
        void gettime(void);
        void puttime(void);
        void addtime(time t1,time t2);
};
void time::gettime(void){
    cout<<"enter time:"<<endl;
    cin>>hours;
    cin>>minutes;
    cin>>seconds;
    
}
void time::puttime(void){

cout<< endl;
cout<<hours <<":"<<minutes<<":"<<seconds<<endl;
}
void time::addtime(time t1,time t2)
{
    this->seconds=t1.seconds+t2.seconds;
    this->minutes=t1.minutes+t2.minutes + this->seconds/60;
    this->hours=t1.hours+t2.hours+ (this->minutes/60);
    this->minutes %=60;
    this->seconds %=60;
}

int main() {
    time t1,t2,t3;
    t1.gettime();
    t2.gettime();
    t3.addtime(t1,t2);
    t3.puttime();
	
	return 0;
}
