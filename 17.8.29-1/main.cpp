#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int *n, maior;
    n = new int;
    cout << "Quantos elementos deve haver no vetor?" << endl;
    fflush(stdin);
    cin >> *n;
    int *vet;
    vet = new int [*n];
    cout << "Digite os numeros do vetor:" << endl;
    for(int i=0;i<*n;i++) {
        fflush(stdin);
        cin >> (vet)[i];
        if(i==0) {
            maior = vet[i];
        }
        else {
            if(vet[i]>maior) {
                maior = vet[i];
            }
        }
    }
    delete[] vet;
    delete n;
    cout << "O maior numero digitado foi: " << maior << "." << endl;
    system("pause");
    return 0;
}
