#include "docente.hpp"

using namespace std;

Docente::Docente() {

}

void Docente::leAtributos() {
    Pessoa::leAtributos();

    cout << "Digite a cadeira que o Docente ensina: " << endl;
    getline(cin, cadeiraEnsinada);

}

void Docente::exibePessoas() {
    Pessoa::exibePessoas();

    cout << "Cadeira ensinada: " << cadeiraEnsinada << endl;
    cout << "----------------------------------------------------------------" << endl;
}

void Docente::exibeNomes() {
    Pessoa::exibeNomes();
}
