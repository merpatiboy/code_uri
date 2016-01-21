#include <iostream>

using namespace std;

int main()
{
    int x,flag = -1,tembak,urutan;
    cin >> x;

    for(int a=0;a<x;a++)
    {
        cin >> tembak;
        if(flag == -1)
        {
            flag = tembak;
            urutan = a+1;
        }

        else if(flag > tembak)
        {
            flag = tembak;
            urutan = a+1;
        }
    }

    cout << urutan << endl;
}
