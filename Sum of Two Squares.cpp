#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
using namespace std;
int main()
{
    vector <int> angka;
    for(int a=0;a<=100;a++)
    {
        for(int b=0;b<=100;b++)
        {
            angka.push_back(pow(a,2)+pow(b,2));
        }
    }
    int test;
    int flag = 0;
    cin >> test;
    for(int a =0 ;  a<angka.size();a++)
    {
        if(angka[a]==test)
            {
                flag = 1;
                break;
            }
    }
    if(flag == 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
