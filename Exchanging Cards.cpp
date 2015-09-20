#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;
int skor_alice[100001];
int skor_betty[100001];
int main()
{
    int c_alice = 1;
    int c_betty = 1;
    while (1)
    {
        int s_alice = 0;
        int s_betty = 0;
        cin >> c_alice;
        cin >> c_betty;
        if(c_alice ==0 && c_betty ==0)
            break;
        for(int a=0;a<c_alice;a++)
            cin >> skor_alice[a];
        for(int a=0;a<c_betty;a++)
            cin >> skor_betty[a];

    }
}
