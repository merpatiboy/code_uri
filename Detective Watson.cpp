#include <iostream>
using namespace std;

int main()
{
    while(1){
        int x;
        int hasil=1;
        cin >> x;
        if(x==0)
            break;
        for(int a=0;a<x;a++){
            int c;
            cin >> c;
            if(c==x)
                hasil = a+1;
        }
        cout << hasil << endl;
    }
}
