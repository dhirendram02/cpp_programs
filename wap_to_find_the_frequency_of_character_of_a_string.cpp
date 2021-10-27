#include <iostream>
using namespace std;

int main() {
    string str;
    cin>>str;
    char checkchar;
    cin>>checkchar;
    int count = 0;
    for(int i=0;i<str.size();i++)
    {
        if(str[i] == checkchar)
        {
            ++count;
        }
    }
    cout<<checkchar<<"="<<count;
    return 0;
}
   