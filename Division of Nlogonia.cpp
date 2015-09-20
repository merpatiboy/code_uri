#include <iostream>
using namespace std;

int main()
{
    while(1)
    {
        int N,coor_pointx,coor_pointy;
        cin >> N;
        if(N==0)break;
        cin >> coor_pointx;
        cin >> coor_pointy;
        for(int a=0;a<N;a++)
        {
            int coor_askx,coor_asky;
            cin >> coor_askx;
            cin >> coor_asky;
            if(coor_pointx==coor_askx || coor_pointy==coor_asky)cout << "divisa" << endl;
            else if(coor_pointx < coor_askx && coor_pointy < coor_asky)cout << "NE" << endl;
            else if(coor_pointx > coor_askx && coor_pointy < coor_asky)cout << "NO" << endl;
            else if(coor_pointx < coor_askx && coor_pointy > coor_asky)cout << "SE" << endl;
            else if(coor_pointx > coor_askx && coor_pointy > coor_asky)cout << "SO" << endl;
        }
    }
}
