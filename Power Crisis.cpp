#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int N, m;
    int AR[1000] ={0};
    cin >> N;
    cin >> m;
    int flag = 1;
    AR[flag] = 1;
    while(N>1)
    {
        int a = 0;
        while(a<m)
        {

            cout << "flag" << flag << endl;
            if(flag>N)
                flag = 1;
            if(AR[flag]==1)
                flag++;
            else if(AR[flag]==0)
            {

                if(a!=m-1)flag++;
                a++;
            }
        }
        N--;
        for(int b=0;b<N;b++)
            cout << ""
        cout << flag << endl;
        AR[flag] == 1;
    }
}
