#include <iostream>
using namespace std;

int main() {
    string line;
    int i;
    cin>>line;
    int len= line.size();
    for(i=0;i<len;++i)
    {
        if(!((line[i]>='a' && line[i]<='z')|| (line[i]>='A' && line[i]<='Z')))
        {
            line[i]='\0';
        }
    }
    cout<<line<<endl;
	return 0;
}
