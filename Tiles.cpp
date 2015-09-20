#include <iostream>
using namespace std;


int main()
{
    while (1)
    {
        long long int x,y,z,simpan_x,simpan_y,batas,kurang=0;
        cin >> z;
        cin >> x;
        cin >> y;
        if(x==0 && y==0 && z==0)break;
        simpan_x = z/x;
        simpan_y = z/y;
        if(x>y)batas  =y;
        else batas = x;
        for(int a=batas;a<=z;a++)
        {
            if(a%x==0 && a%y==0)kurang++;
        }
        cout << simpan_x + simpan_y - kurang << endl;
    }

}
