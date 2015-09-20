#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    for(int a=0;a<N;a++)
    {
        int QT,S,score,flag =0 ,dif = 0;
        cin >> QT;
        cin >> S;
        for(int b=0;b<QT;b++)
        {
            cin >> score;
            int temp;
            if(score-S<0) temp = (score-S)*-1;
            else temp = (score-S);
            if(flag==0)
            {
                flag = b+1;
                dif = temp;
            }
            else if(dif > temp)
            {
                flag = b + 1;
                dif = temp;
            }
        }
        cout << flag << endl;
    }
}
