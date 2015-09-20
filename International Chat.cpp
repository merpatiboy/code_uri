#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x;
    cin >> x;
    for(int a=0;a<x;a++)
    {
        int y,tanda=1;
        string z;
        cin >> y;
        cin >> z;
        for (int b=0;b<y-1;b++)
        {
            string w;
            cin >> w;
            if(w!=z)tanda = 0;
        }
        if(tanda!=1)cout << "ingles" << endl;
        else cout << z << endl;
    }
}
