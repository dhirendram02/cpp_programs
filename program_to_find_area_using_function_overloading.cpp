#include <iostream>
using namespace std;

int area(int);
int area(int,int);
float area(float);
float area(float,float);
int main() {
	
	int sq,len,bre;
	float r,bs,ht;
	cin>>sq;
	cin>>len>>bre;
	cin>>r;
	cin>>bs>>ht;
	
	cout<<"\nArea of Square is"<<area(sq);
		cout<<"\nArea of Rectangle is"<<area(len,bre);
			cout<<"\nArea of Circle is"<<area(r);
				cout<<"\nArea of Triangle is"<<area(bs,ht);
}
int area(int s)
{
    return(s*s);
    
}
int area(int len,int bre)
{
    return(len*bre);
}
float area(float r)
{
    return(3.14*r*r);
}
float area(float bs,float ht)
{
    return((bs*ht)/2);
}
	