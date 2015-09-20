#include<iostream>
#include<string>

using namespace std;

string line;
char keyboard[256];

int main() {
    for(int i = 0; i < 256; i++)
        keyboard[i] = i;
    // remap
    keyboard['1'] = '`';
    keyboard['2'] = '1';
    keyboard['3'] = '2';
    keyboard['4'] = '3';
    keyboard['5'] = '4';
    keyboard['6'] = '5';
    keyboard['7'] = '6';
    keyboard['8'] = '7';
    keyboard['9'] = '8';
    keyboard['0'] = '9';
    keyboard['-'] = '0';
    keyboard['='] = '-';
    keyboard['W'] = 'Q';
    keyboard['E'] = 'W';
    keyboard['R'] = 'E';
    keyboard['T'] = 'R';
    keyboard['Y'] = 'T';
    keyboard['U'] = 'Y';
    keyboard['I'] = 'U';
    keyboard['O'] = 'I';
    keyboard['P'] = 'O';
    keyboard['['] = 'P';
    keyboard[']'] = '[';
    keyboard['\\'] = ']';
    keyboard['S'] = 'A';
    keyboard['D'] = 'S';
    keyboard['F'] = 'D';
    keyboard['G'] = 'F';
    keyboard['H'] = 'G';
    keyboard['J'] = 'H';
    keyboard['K'] = 'J';
    keyboard['L'] = 'K';
    keyboard[';'] = 'L';
    keyboard['\''] = ';';
    keyboard['X'] = 'Z';
    keyboard['C'] = 'X';
    keyboard['V'] = 'C';
    keyboard['B'] = 'V';
    keyboard['N'] = 'B';
    keyboard['M'] = 'N';
    keyboard[','] = 'M';
    keyboard['.'] = ',';
    keyboard['/'] = '.';
    getline(cin, line);
    for(int i = 0; i < line.length(); i++)
            line[i] = keyboard[line[i]];
    cout << line << endl;
}
