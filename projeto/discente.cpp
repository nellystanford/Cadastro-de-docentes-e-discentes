#include "discente.hpp"

using namespace std;

Discente::Discente() {

}

void Discente::leAtributos() {
    Pessoa::leAtributos();

    cout << "Digite o ano de entrada do Discente: " << endl;
    cin >> anoEntrada;

    cout << "Digite o CRA do Discente: " << endl;
    cin >> CRA;
}

void Discente::exibePessoas() {
    Pessoa::exibePessoas();

    cout << "Ano de entrada do discente: " << anoEntrada << endl;
    cout << "CRA do discente: "            << CRA        << endl;
    cout << "----------------------------------------------------------------" << endl;

}

void Discente::exibeNomes() {
    Pessoa::exibeNomes();
}

int Discente::getAnoEntrada() {
    return anoEntrada;
}

float Discente::getCRA() {
    return CRA;
}
