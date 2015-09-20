#include <iostream>
using namespace std;

int main()
{
    int x;
    while(1)
    {
        cin >> x;
        if(x == 0)
            break;
        int total = 0,temp;
        while(1)
        {
            if(x<=3)
            {
                total++;
                break;
            }
            else if(x/3>0)
            {
                int sisa;
                total += x/3;
                sisa = x/3;
                if(x%3!=0)
                {
                    total++;
                    sisa++;
                }
                x = sisa;
            }
        }
        if(x>1)cout << total << endl;
        else
            cout << "0" << endl;
    }
}
