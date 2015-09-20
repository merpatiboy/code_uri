#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    int size_tra = 1;
    while (1)
    {
        cin >> size_tra;
        if(size_tra == 0)
            break;
        double h = 5.0,A,B,Q;
        for(int a=0;a<size_tra;a++)
        {
            cin >> Q;
            cin >> A;
            cin >> B;
        printf("Size #%d:\nIce Cream Used: %.2lf cm2\n",a+1,0.5*h*(A+B)*Q);
        }
        cout << endl;
    }

}
