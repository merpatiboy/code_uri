#include <stdio.h>
#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    while(1)
    {
        char kata[1000];
        gets(kata);
        if(strcmp(kata,"*")==0)break;
        int flag =0,penanda,score= 1;
        if(kata[0]==32)
        {
            while(kata[flag]==32)
            {
                flag++;
            }
        }
        for(int a=flag;a<strlen(kata);)
        {
            //int count_s = 0;
            if(a==flag)
            {
                penanda = kata[a];
                a++;
            }
            else
            {
                while(kata[a]!=32 && a<strlen(kata))
                {
                    a++;
                    //count_s++;
                }
                if((penanda!=kata[a+1] && penanda!=kata[a+1]+32 && penanda!=kata[a+1]-32)&&a<strlen(kata))
                {
                    score = 0;
                    break;
                }
                a++;
            }
        }
        if( score == 1)cout << "Y" << endl;
            else cout << "N" << endl;
    }
}
