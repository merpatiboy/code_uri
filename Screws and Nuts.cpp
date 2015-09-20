#include <iostream>
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    while(1)
    {
        int x,lim=0;
        vector <int> val;
        cin >> x;
        int count_s = getchar();
        if(count_s == EOF)break;
        for(int a=0;a<x;a++)
        {
            int low_limit, high_limit;
            cin >> low_limit;
            cin >> high_limit;
            for(int b=low_limit;b<=high_limit;b++)
            {
                val.push_back(b);
            }
        }
        int search__;
        cin >> search__;
        sort(val.begin(),val.end());
        int found_low=-1, found_high=0;
        for(int a=0;a<val.size();a++)
        {
            if(val[a]==search__ && found_low==-1)
            {
                found_low = a;
                found_high = a;
            }
            else if(val[a]!=search__ && found_low!=-1)
            {
                found_high = a-1;
                break;
            }
        }
        if(found_low!=-1)printf("%d found from %d to %d\n",search__,found_low,found_high);
        else printf("%d not found\n",search__);
    }
}
