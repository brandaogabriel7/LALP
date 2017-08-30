/* O programa compila e executa, mas durante a execução ocorre um erro de
* alocação da matriz.
*/


#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int m, n, soma=0;
    cout << "Quais serao as dimensoes das matrizes?" << endl;
    cin >> m, n;
    float **p1, **p2;
    p1 = new float * [m];
    p2 = new float * [m];
    for(int i=0;i<m;i++) {
        p1[i] = new float [n];
        p2[i] = new float [n];
        for(int j=0;j<n;j++) {
            cout << "Digite um numero para o vetor 1:" << endl;
            cin >> p1[i][j];
            cout << "Digite um numero para o vetor 2:" << endl;
            cin >> p2[i][j];
            soma+=p1[i][j]+p2[i][j];
        }
    }
    system("cls");
    cout << "Soma:\t" << soma << endl;
    system("pause");
    return 0;
}
