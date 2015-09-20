#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int main()
{
    int total = 0;
    int ulang = 0;
    string ssn;
    cin >> ssn;
    for(int a=0;a<ssn.length()-2;a++)
    {
        if(ssn[a]!='.' && ssn[a]!='-')
        {
            ulang ++;
            int dummy = ssn[a]-'0';
            total += dummy*ulang;
        }
    }

}
