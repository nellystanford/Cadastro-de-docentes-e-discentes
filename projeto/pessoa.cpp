#include "pessoa.hpp"
#include <fstream>

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
    cout << endl;
    cout << "----------------------------------------------------------------" << endl;
    cout << "Nome: " << nome << endl;
    cout << "----------------------------------------------------------------" << endl;
}

void Pessoa::exportaArquivo(std::string nomeArquivo) {
    // objeto para acessar o arquivo
    ofstream arq;
    // abertura do arquivo para escrita ao final dos dados já existentes
    arq.open(nomeArquivo, ios::app);

    //verificação de erro na abertura do arquivo
    if (!arq.is_open()) {
        cout << "Erro ao abrir o arquivo" << endl;
        return;
    }

    arq << "-----------------------------------------------" << endl;
    arq << "Nome: " << nome << endl;
    arq << "Sexo: " << sexo << endl;
    arq << "Endereco: " << endereco.rua << ", " << endereco.bairro << ". " << endereco.CEP << "." << endl;
    arq << "Idade: " << idade << endl;

    // fechamento do arquivo
    arq.close();
}
