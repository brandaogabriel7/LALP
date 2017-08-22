#include <iostream>
#include <cstdlib>

using namespace std;

class PESSOA {
public:
    char nome[20];
    int idade;
    float altura;
    float peso;
};

int main()
{
    PESSOA *p, gabriel;
    p = &gabriel;
    cout << "Digite o nome da pessoa:" << endl;
    cin >> p->nome;
    cout << "Digite a idade de " << (*p).nome << ":" << endl;
    cin >> (*p).idade;
    cout << "Digite a altura de " << (*p).nome << ":" << endl;
    cin >> (*p).altura;
    cout << "Digite o peso de " << (*p).nome << ":" << endl;
    cin >> (*p).peso;
    system("cls");
    cout << "Nome: " << (*p).nome << endl;
    cout << "Idade: " << (*p).idade << endl;
    cout << "Altura: " << (*p).altura << endl;
    cout << "Peso: " << (*p).peso << endl;
    return 0;
}
