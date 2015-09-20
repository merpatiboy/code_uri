#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

int max(int a, int b)
{
    return (a>b)? a: b;
}

int str(char *X, char *Y, int m, int n)
{
    int LCS[m+1][n+1];
    int hasil = 0;
    for(int i=0;i<=m;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(i==0 || j==0)
                LCS[i][j] = 0;
            else if(X[i-1]==Y[j-1])
            {
                LCS[i][j] = LCS[i-1][j-1] + 1;
                hasil = max(hasil, LCS[i][j]);
            }
            else LCS[i][j] = 0;
        }
    }
    return hasil;
}

int main()
{
    char X[1000],Y[1000];
    gets(X);
    gets(Y);
    int m =strlen(X);
    int n = strlen(Y);
    cout << str(X,Y,m,n) << endl;
}
