#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int vet[10], *p;
    cout << "Digite dez numeros:" << endl;
    for(int i=0;i<10;i++) {
        p = vet;
        cin >> vet[i];
    }
    system("cls");
    for(int i=0;i<10;i++) {
        cout << vet[i] << ":\t" << p+i << endl;
    }
    system("pause");
    return 0;
}
