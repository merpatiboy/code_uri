#include <iostream>
using namespace std;
int main()
{
    long long int A;
    long long int B;
    long long int totalA = 0;
    long long int totalB = 0;
    cin >> A;
    cin >> B;
    totalA = (A*(2*1+(A-1)*1))/2;
    totalB = (B*(2*1+(B-1)*1))/2;
    totalA = totalB-totalA;
    cout << totalA << endl;
}
