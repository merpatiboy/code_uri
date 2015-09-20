#include <iostream>
#include <math.h>
#include <stdio.h>
using namespace std;
int check_triangle(double A, double B, double C)
{
    double square_A=pow(A,2),square_B=pow(B,2),square_C = pow(C,2);
    if (A==0 || B==0 || C==0)
        return 0;
    else if(A==B && A>C)
        return 1;
    else if(A==B && A==C)
        return 1;
    else if(square_C == (square_A + square_B))
        return 1;
    else return 0;
}
int main()
{
    double A,B,C;
    cin >> A;
    cin >> B;
    cin >> C;
    int check = check_triangle(A,B,C);
    if(check == 1)
    {
        double P = (A+B+C);
        printf("Perimetro = %.1lf\n",P);
    }
    else
    {
        double Area = (A+B)*C/2.0;
        printf("Area = %.1lf\n",Area);
    }

}
