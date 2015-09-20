#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    double x;
    for(int a=0;a<100;a++)
    {
        cin >> x;
        if(x<=10.0)
        {
            printf("A[%d] = ",a);
            cout << x << endl;
        }
    }
}
