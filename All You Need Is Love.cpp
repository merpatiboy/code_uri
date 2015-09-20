#include <iostream>
#include <string.h>
#include <string>
#include <math.h>
using namespace std;
int check(long long int x, long long int y){
    int flag = 0;
    for(long long int a=2;a<=sqrt(x);a++)
    {
        if(x%a==0 && y%a==0)
        {
            flag = 1;
            break;
        }
    }
    return flag;
}
int main()
{
    int N;
    cin >> N;
    for(int a=0;a<N;a++)
    {
        string word;
        long long int total_1 = 0;
        long long int total_2 = 0;
        cin >> word;
        int M = word.length() - 1;
        for(int b=0;b<word.length();b++){
            if(word[b]=='1')
            {
                total_1 += pow(2,M);
            }
            M--;
        }
        cin >> word;
        M = word.length() - 1;
        for(int b=0;b<word.length();b++){
            if(word[b]=='1')
            {
                total_2 += pow(2,M);
            }
            M--;
        }
       int flag = check(total_1,total_2);
        if(flag==1 || total_1 == total_2)
            cout << "Pair #"<<a+1<<": All you need is love!" << endl;
        else
            cout << "Pair #"<<a+1<<": Love is not all you need!" << endl;
    }
}
