#include "menu.hpp"
#include <iostream>

using namespace std;

void Menu::MenuEntrada() {
    cout << "----------------------------------------------------------------" << endl;
    cout << "         Bem-vindo ao cadastro de docentes e discentes          " << endl;
    cout << "----------------------------------------------------------------" << endl;
}

void Menu::MenuPrincipal() {
    cout << "----------------------------------------------------------------" << endl;
    cout << "Selecione uma das opções a seguir:                              " << endl;
    cout << "1 - Cadastrar Docente                                           " << endl;
    cout << "2 - Cadastrar Discente                                          " << endl;
    cout << "3 - Consultar cadastros                                         " << endl;
    cout << "4 - Remover cadastro                                            " << endl;
    cout << "5 - Sair                                                        " << endl;
    cout << "----------------------------------------------------------------" << endl;
}

void Menu::MenuRemocao() {
    cout << "----------------------------------------------------------------" << endl;
    cout << "1 - Remover Docente                                             " << endl;   
    cout << "2 - Remover Discente                                            " << endl;
    cout << "3 - Voltar para o Menu Principal                                " << endl;
    cout << "----------------------------------------------------------------" << endl;

}

void Menu::MenuSaida() {
    cout << "----------------------------------------------------------------" << endl;
    cout << "              Obrigada pela preferência! Até mais!              " << endl;
    cout << "----------------------------------------------------------------" << endl;
}
