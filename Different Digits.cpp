#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void check(int a, int &score)
{
    vector <int> temp;
    int flag = 1;
    while(a>0)
    {
        int x = a%10;
        if(temp.empty())
            temp.push_back(x);
        else{
            for(int b=0;b<temp.size();b++)
            {
                if(x==temp[b]){
                flag = 0;
                break;
                }
            }
            temp.push_back(x);
        }
        a/=10;
    }
    score +=flag;
}

int main()
{
    int N,M,flag=1;
    cin >> N;
    cin >> M;
    if(N>M){
            swap(N,M);
            flag = 0;
    }
    int score = 0;
    for(int a=N;a<=M;a++)
        check(a,score);
    if(flag==1)
        cout << score << endl;
    else
        cout << score*-1 << endl;
    return 0;
}
