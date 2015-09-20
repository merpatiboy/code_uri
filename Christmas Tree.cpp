#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    while(1)
    {
        int angka;
        cin >> angka;
        int test = getchar();
        if(test == EOF)
            break;
        int space  = angka/2;
        int column = ceil(angka/2.0);
        for(int a=0;a<column;a++)
        {
            for(int b=0;b<space-a;b++)cout << " ";
            if(a==0)cout << "*" << endl;
            else
            {
                for(int b=0;b<(2*a+1);b++)
                    cout << "*";
                cout << endl;
            }
        }
         for(int a=0;a<2;a++)
        {
            for(int b=0;b<space-a;b++)cout << " ";
            if(a==0)cout << "*" << endl;
             else
            {
                for(int b=0;b<(2*a+1);b++)
                    cout << "*";
                cout << endl;
            }
        }
        cout << endl;
    }
}
