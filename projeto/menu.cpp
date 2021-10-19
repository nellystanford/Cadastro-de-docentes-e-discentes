#include "includes.hpp"

using namespace std;

void Menu::MenuEntrada() {
    for(int i = 3; i >= 0; i--) {
        cout << "----------------------------------------------------------------" << endl;
        cout << "         Bem-vindo ao cadastro de docentes e discentes          " << endl;
        cout << "----------------------------------------------------------------" << endl;
        cout << "Timer: " << i << endl;
        sleep(1);
        system(CLEAR);
    }
}

void Menu::MenuPrincipal() {
    cout << "----------------------------------------------------------------" << endl;
    cout << "Selecione uma das opções a seguir:                              " << endl;
    cout << "1 - Cadastrar Docente                                           " << endl;
    cout << "2 - Cadastrar Discente                                          " << endl;
    cout << "3 - Consultar cadastros                                         " << endl;
    cout << "4 - Remover cadastro                                            " << endl;
    cout << "0 - Sair                                                        " << endl;
    cout << "----------------------------------------------------------------" << endl;
}

void Menu::MenuRemocao() {
    system(CLEAR);
    cout << "----------------------------------------------------------------" << endl;
    cout << "1 - Remover Docente                                             " << endl;   
    cout << "2 - Remover Discente                                            " << endl;
    cout << "3 - Voltar para o Menu Principal                                " << endl;
    cout << "----------------------------------------------------------------" << endl;

}

void Menu::MenuSaida() {
    system(CLEAR);
    cout << "----------------------------------------------------------------" << endl;
    cout << "              Obrigada pela preferência! Até mais!              " << endl;
    cout << "----------------------------------------------------------------" << endl;
}
