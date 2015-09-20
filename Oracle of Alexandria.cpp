#include <iostream>
#include <string.h>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int a=0;a<N;a++)
    {
        char number[1000];
        scanf("%s",number);
        int count_ =0,flag =0 ;
        unsigned long long int y=1;
        int x = 0;
        for(int b=strlen(number)-1;b>=0;b--)
        {
            if(number[b]=='!')
            {
                count_++;
            }
            else
            {
                x += ((number[b]-'0')*pow(10,flag));
                flag++;
            }
        }
        int flag1 = 0;
        while(1)
        {
            if(x-flag1*count_<=0)break;
            y *= (x-flag1*count_);
            flag1++;
        }
        cout << y << endl;
    }
}
