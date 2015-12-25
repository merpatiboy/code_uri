#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    int N,M;
    while(1)
    {
        vector < vector <int> > y;
        cin >> N;
        cin >> M;
        //cout << "wow " << endl;
        int event_1 = 1, event_2 = 1,  event_3 = 1, event_4 = 1;
        if (N == 0 && M==0)
            break;
        for(int a=0;a<N;a++){
            vector < int > x;
            int check = 0;
            for(int b=0;b<M;b++)
            {
                int dump;
                cin >> dump;
                if(dump != 0)
                    check++;
                x.push_back(dump);
            }
            if(check==M)
                event_1 = 0;
            else if(check==0)
                event_4 = 0;
            y.push_back(x);
        }
        for(int a=0;a<M;a++)
        {
            int check = 0;
            for(int b=0;b<N;b++)
            {
                if(y[b][a]==1)
                    check++;
            }
            if(check==0)
                event_2 = 0;
            else if(check==N)
                event_3 = 0;
        }
        //aaaa
        cout << event_1+event_2+event_3 + event_4 << endl;
    }
}
