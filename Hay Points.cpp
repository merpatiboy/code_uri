#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    int N,N_se;
    cin >> N;
    cin >> N_se;
    vector <string> word;
    vector <int> cost;
    vector <string> word_se;
    for(int a=0;a<N;a++)
    {
        string dummy;
        int dummy_cost;
        cin >> dummy;
        cin >> dummy_cost;
        word.push_back(dummy);
        cost.push_back(dummy_cost);
    }
    for(int a=0;a<N_se;a++)
    {
        while(1){
            string dummy;
            cin >> dummy;
            if(cin.get()== '\n'){
                word_se.push_back(dummy);
                break;
                }
            else
                word_se.push_back(dummy);
        }
        int jumlah = 0;
        for(int b=0;b<word_se.size();b++){
            for(int c=0;c<N;c++)
            {
                if(word_se[b]==word[c])
                    jumlah += cost[c];
            }
        }
     cout << jumlah << endl;
    }
}
