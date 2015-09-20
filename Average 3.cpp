#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    double total = 0,batas,N;
    for(int a=0;a<4;a++)
    {
        cin >> N;
        total += N;
    }
    cin >> batas;
    total /= 4.0;
    printf("Media: %.1lf\n",total);
    if(total>=7.0)cout << "Aluno aprovado." << endl;
    else if(total<5.0) cout << "Aluno reprovado." << endl;
    else cout <<"Aluno em exame." << endl;
    printf("Nota do exame: %.1lf\n",batas);
    double total1 = (total+batas)/2.0;
    if(total1>=5.0)cout << "Aluno aprovado." << endl;
    else if(total1<5.0) cout << "Aluno reprovado." << endl;
    printf("Media final: %.1lf\n",total1);
}
