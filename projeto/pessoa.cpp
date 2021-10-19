#include "pessoa.hpp"

using namespace std;

Pessoa::Pessoa() {

}

void Pessoa::leAtributos() {
    cout << "Digite o nome: " << endl;
    getchar();
    getline(cin, nome);

    cout << "Digite o CEP: " << endl;
    getline(cin, endereco.CEP);

    cout << "Digite a rua: " << endl;
    getline(cin, endereco.rua);

    cout << "Digite o bairro: " << endl;
    getline(cin, endereco.bairro);

    cout << "Digite a idade: " << endl;
    cin >> idade;

    cout << "Digite o sexo: (feminino ou masculino)" << endl;
    getchar();
    getline(cin, sexo);
}

void Pessoa::exibePessoas() {
    cout << "----------------------------------------------------------------" << endl;
    cout << "Nome: "  << nome  << endl;
    cout << "Idade: " << idade << endl;
    cout << "Sexo: "  << sexo  << endl;
    cout << "Endereco: " << endereco.rua << ", " << endereco.bairro << ". " << endereco.CEP << "." << endl;
}

void Pessoa::exibeNomes() {
    cout << "----------------------------------------------------------------" << endl;
    cout << "Nome: " << nome << endl;
    cout << "----------------------------------------------------------------" << endl;
}
