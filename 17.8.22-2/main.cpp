#include <iostream>

using namespace std;

void reajusta(float *s, int p);

int main()
{
    int p;
    float salario;
    cout << "Digite o salario:" << endl;
    cin >> salario;
    cout << "Digite a porcentagem de ajuste:" << endl;
    cin >> p;
    reajusta(&salario, p);
    cout << "Salario atualizado:\t" << salario << endl;
    return 0;
}

void reajusta(float *s, int p) {
    float a;
    a=(*s)*p/100;
    *s+=a;
}
