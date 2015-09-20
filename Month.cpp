#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;

int main()
{
    int x;
    char month[13][13]={"January","February","March","April","May","June","July","August","September","October","November",
    "December"};
    cin >> x;
    cout << month[x-1] << endl;
}
