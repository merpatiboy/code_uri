#include <iostream>
using namespace std;

int main()
{
    long long int D,VF,VG;
    cin >> D;
    cin >> VF;
    cin >> VG;
    if((VF*D/VG)>=12)
        cout << "N" << endl;
    else
        cout << "S" << endl;
}
