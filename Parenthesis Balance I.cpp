#include <iostream>
#include <string>
#include <string.h>
#include <stack>
using namespace std;
int main()
{
    while(1)
    {
      string notation;
    bool x = 1;
    stack <int> check;
    getline(cin,notation);
    for(int a=0;a<notation.length();a++)
    {
        if(notation[a]=='(')
            check.push(1);
        else if(notation[a]==')' && check.empty())
        {
            x = 0;
            break;
        }
        else if(notation[a]==')')
        {
            check.pop();
        }
    }
    if(check.empty() && x==1)
        cout << "correct" << endl;
    else cout << "incorrect" << endl;
    }
}
