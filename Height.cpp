#include <iostream>
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    for(int a=0;a<N;a++)
    {
        int x;
        vector <int> angka;
        cin >> x;
        for(int b=0;b<x;b++)
        {
            int y;
            cin >> y;
            angka.push_back(y);
        }
        sort(angka.begin(),angka.end());
        for(int b=0;b<x;b++)
        {
            if(b == x-1)
                cout << angka[b] << endl;
            else
                cout << angka[b] << " ";
        }
    }
}
