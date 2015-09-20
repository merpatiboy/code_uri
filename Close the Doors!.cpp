#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

void print(long long int x)
{
    long long int y = 1;
    vector <long long int> save;
    while((pow(y,2))<=x)
    {
        save.push_back(pow(y,2));
        y++;
    }
    if(save.size()>1)
    {
        for(long long int a=0;a<save.size()-1;a++)
            cout << save[a] <<" ";
        cout << save[save.size()-1] << endl;
    }
    else
        cout << save[save.size()-1] << endl;
}
int main(){
    long long int x;
    while(1)
    {
        cin >> x;
        if(x==0)
            break;
        print(x);
    }
}
