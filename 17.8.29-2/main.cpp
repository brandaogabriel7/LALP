#include <iostream>
#include <cstdlib>

using namespace std;

class ALUNO {
private:
    string nome;
    float notaFinal;
public:
    void getNome(string nome) {
        this->nome=nome;
    }
    string readNome () {
        return this->nome;
    }
    void getNota (float nota) {
        this->notaFinal = nota;
    }
    float readNota () {
        return this->notaFinal;
    }
};

int main()
{
    int n;
    float nota, media=0;
    string nome;
    cout << "Quantos alunos ha na turma?" << endl;
    fflush(stdin);
    cin >> n;
    ALUNO *a;
    a = new ALUNO [n];
    for(int i=0;i<n;i++) {
        cout << "Digite o nome do aluno:" << endl;
        fflush(stdin);
        cin >> nome;
        (a+i)->getNome(nome);
        cout << "Digite a nota final do aluno:" << endl;
        fflush(stdin);
        cin >> nota;
        (a+i)->getNota(nota);
        media+=nota;
    }
    media/=n;
    system("cls");
    cout << "Aprovados:" << endl;
    for(int i=0;i<n;i++) {
        if((a+i)->readNota()>=media) {
            cout << (a+i)->readNome() << "\t" << (a+i)->readNota() << endl;
        }
    }
    delete[] a;
    system("pause");
    return 0;
}
