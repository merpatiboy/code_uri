#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main()
{
    double A,B,C;
    cin >> A;
    cin >> B;
    cin >> C;
    double result_C = B*B-(4*A*C);
    double result_B = -1*B;
    if(result_C<0)cout << "Impossivel calcular" << endl;
    else if (A==0) cout << "Impossivel calcular" << endl;
    else{
        double result_p = (result_B+sqrt(result_C))/(2*A);
        double result_n = (result_B-sqrt(result_C))/(2*A);
        printf("R1 = %.5lf\n",result_p);
        printf("R2 = %.5lf\n",result_n);
    }

}
