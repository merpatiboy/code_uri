#include <stdio.h>
#include <iostream>
#include <algorithm>
#include <string.h>
#include <string>

using namespace std;

int main()
{
    int x;
    int y;
    cin >> x;
    cin >> y;
    char game[y][x];
    for(int a=0;a<y;a++)
    {
        for(int b=0;b<x;b++)
        {
            char dump;
            cin >> dump;
            game[a][b] = dump;
        }
    }
    int a =0;
    int b =0;
    while(game[a][b]!='?' && game[a][b]!='.' && game[a][b]!='*')
    {
        if(game[a][b]=='>')
        {
            game[a][b] = '?';
            while((game[a][b]=='.' || game[a][b]== '?' ) && b < x && game[a][b] != '*')
            {
                b++;
            }
        }
        if(game[a][b]=="<")
        {
            game[a][b] = "?";
            while((game[a][b]=="." || game[a][b]== "?" ) && b > 0 && game[a][b] != "*")
            {
                b--;
            }
        }
        if(game[a][b]=="v")
        {
            game[a][b] = "?";
            while((game[a][b]=="." || game[a][b]== "?" ) && a > y && game[a][b] != "*")
            {
                a++;
            }
        }
        if(game[a][b]=="^")
        {
            game[a][b] = "?";
            while((game[a][b]=='.' || game[a][b]== '?' ) && a > 0 && game[a][b] != '*')
            {
                a--;
            }
        }
        if(game[a][b]=='*')
            break;
        if(game[a][b]=='?')
            break;
        if(game[a][b]=='*')
            break;
    }
    if(game[a][b]=='*')
        cout << "*" << endl;
    else
        cout << "!" << endl;


}
