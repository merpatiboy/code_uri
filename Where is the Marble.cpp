#include <iostream>
#include <vector>
#include <stdio.h>

using namespace std;

int main()
{
    int N,Q,countx = 1;
    while(1)
    {
        vector <int> x;
        cin >> N;
        cin >> Q;
        if(Q==0  && N==0)
            break;
        int temp;
        for(int a=0;a<N;a++)
        {
            cin >> temp;
            x.push_back(temp);
        }
        printf("CASE# %d:\n",countx);
        for(int a=0;a<Q;a++)
        {
            int temp2 = 2, flag  =0;
            cin >> temp;
            for(int b=0;b<x.size();b++)
            {
                if(temp == x[b])
                {
                    flag = 1;
                    break;
                }
                temp2++;
            }
            if(flag==1)
                printf("%d found at %d\n",temp,temp2);
            else
                printf("%d not found\n",temp);

        }
        countx++;
    }
}
