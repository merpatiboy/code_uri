#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
     while(1)
    {
        int N,x;
        vector <int> P;
        cin >> N;
        if(N==0)
            break;
        for(int a=0;a<N;a++)
        {
           cin >> x;
           P.push_back(x);
        }
        //cout << P.size() << endl;
        int sum = 0;
        for(int a=0;a<P.size();a++)
        {
            for(int b=0;b<P.size()-a-1;b++)
            {
                if(P[b]>P[b+1])
                {
                    //cout << "P[B]" << P[b] << "P[B+1]" << P[b+1] << endl;
                    swap(P[b],P[b+1]);
                    sum++;
                }
            }
        }
        //for(int a=0;a<P.size();a++)
        //    cout << P[a] << endl;
        cout << sum << endl;
        if(sum%2==1)
            cout << "Marcelo" << endl;
        else
            cout << "Carlos" << endl;
    }
}
