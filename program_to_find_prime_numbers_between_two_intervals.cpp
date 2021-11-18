#include <iostream>
using namespace std;

int checkprimenumber(int);

int main() {
  int n1,n2;
  bool temp;
  cin>>n1>>n2;
  
  cout<<"\nprime number between ["<<n1<<" and "<<n2<<"]";
  
  for(int i=n1+1;i<n2;++i)
  {
      temp=checkprimenumber(i);
      
      if(temp == false)
         cout<<i<< " ";
  }
	return 0;
}

int checkprimenumber(int n)
{
    bool temp = true;
    for(int j = 2;j<= n/2;++j)
    {
        if(n%j == 0)
        {
            temp=false;
            break;
        }
    }
    return temp;
}
