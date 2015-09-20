#include <iostream>
#include <string>
using namespace std;

int main()
{
    string x;
    getline(cin,x);
    for(int a=0;a<x.size();a++)
    {
        int flag = 0;
        if(x[a]=='<')
        {
            if(x[a+1]=='b' && x[a+2]=='r' && x[a+3]=='>'){
                a +=3;
                cout << endl;
                flag = 1;
            }
            else if(x[a+1]=='h' && x[a+2]=='r' && x[a+3]=='>'){
                a +=3;
                for(int a=0;a<80;a++)cout << '-';
                cout << endl;
                flag = 1;
            }
        }
        if(flag != 1)
            cout << x[a];
    }
}
