#include <stdio.h>
#include <iostream>
#include <string>
#include <string.h>
using namespace std;


 int main()
 {
    char word[1000];
    gets(word);
    int all = 1;
    char getChar;
    for(int a=0;a<strlen(word);a++)
    {
        getChar = word[a];
        if(word[a] == word[a+1] && all <9)
        {
            all ++;
        }
        else if((word[a] != word[a+1] && word[a+1] != NULL))
        {
            cout << all << word[a];
            all = 1;
        }
        if(all == 9)
        {
            cout << all << word[a];
            all = 1;
        }
    }
    cout << all << getChar << endl;
 }
