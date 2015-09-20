#include <string>
#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    while(1){
        string se;
        bool i = 0;
        bool b = 0;
        getline(cin,se);
        if(cin.eof())
            break;
        for(int a=0;a<se.length();a++)
        {
            int char_w = se[a];
            if(char_w == 95 && i==0)
            {
                i =1;
                cout << "<i>";
            }
            else  if(char_w == 95 && i==1)
            {
                i =0;
                cout << "</i>";
            }
            else if(char_w == 42 && b==0)
            {
                b =1;
                cout << "<b>";
            }
            else if(char_w == 42 && b==1)
            {
                b =0;
                cout << "</b>" ;
            }
            else
                cout << se[a];
        }
        cout << endl;
    }

}
