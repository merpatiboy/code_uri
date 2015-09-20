#include <iostream>
#include <string.h>
#include <stdio.h>
#include <string>
using namespace std;
int cek(char test[],char X[])
{
    int x;
    if(strlen(test)>strlen(X))x=strlen(test);
    else x = strlen(X);

}
int main()
{
    char X[1005][50];
    int count_x,count_test;
    cin >> count_x;
    for(int a=0;a<count_x;a++)
    {
        scanf("%s",X[a]);
    }
    cin >> count_test;
    for(int a=0;a<count_test;a++)
    {
        char test[50];
        int tanda = 0;
        scanf("%s",test);
        for(int b=0;b<count_x;b++)
        {
            int y = cek(test,X[b]);
        }
    }

}
