#include <iostream>
using namespace std;

int main() {
	int num;
	int a=1;
	int pw;
	cin>>num;
	cin>>pw;
	for(int i = 1;i<= pw; i++)
	{
	    a=a*num;
	}
	cout<<a;
	return 0;
}
