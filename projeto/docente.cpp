#include "docente.hpp"
#include <fstream>

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

void Docente::exportaArquivo(std::string nomeArquivo) {
    Pessoa::exportaArquivo(nomeArquivo);

    ofstream arq;
    arq.open(nomeArquivo, ios::app);

    arq << "Cadeira ensinada: " << cadeiraEnsinada << endl;
    arq << "-----------------------------------------------" << endl;

    arq.close();
}
