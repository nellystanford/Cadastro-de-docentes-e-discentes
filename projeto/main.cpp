#include "docente.hpp"
#include "discente.hpp"
#include "endereco.hpp"
#include "menu.hpp"
#include "pessoa.hpp"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main () {
    //Docente doc[100];
    //Discente disc[100];
    vector<Docente>doc(100);
    vector<Discente>disc(100);
    Menu menu;
    int numRemocao;
    int op = 1, countDoc = 0, countDisc = 0, op2 = 0, i = 0;

    // menu de boas-vindas
    menu.MenuEntrada();

    while(op != 6) {
        //menu de seleção de ação
        menu.MenuPrincipal();
        cin >> op;

        switch(op) {
            // cadastro docente:
            case 1:
                doc[countDoc].leAtributos();
                cout << endl;
                cout << "Docente adicionado com sucesso!" << endl;
                countDoc++;
                break;
            
            // cadastro discente:
            case 2:
                disc[countDisc].leAtributos();
                cout << endl;
                cout << "Discente adicionado com sucesso!" << endl;
                countDisc++;
                break;

            // consulta de cadastros:
            case 3:

                cout << "        " << endl;
                cout << "DOCENTES" << endl;
                cout << "        " << endl;

                for(i=0; i<countDoc; i++) {
                    doc[i].exibePessoas();
                }

                cout << "         " << endl;
                cout << "DISCENTES" << endl;
                cout << "         " << endl;

                for(i=0; i<countDisc; i++) {
                    disc[i].exibePessoas();
                }

                break;
            
            // remoção de cadastro:
            case 4:

                menu.MenuRemocao();
                cin >> op2;

                    switch(op2) {

                        // remover docente 
                        case 1:

                            for(i=0; i<countDoc; i++) {
                                cout << "Docente " << i+1 << ": ";
                                doc[i].exibeNomes();
                                cout << endl;
                            }

                            cout << "Digite o número do docente que deseja remover: " << endl;
                            cin >> numRemocao;


                            break;

                        //remover discente
                        case 2:

                            for(i=0; i<countDisc; i++) {
                                cout << "Discente " << i+1 << ": ";
                                disc[i].exibeNomes();
                                cout << endl;
                            }


                            cout << "Digite o número do discente que deseja remover: " << endl;
                            cin >> numRemocao;

                            //disc.erase(numRemocao-1);

                            break;

                        //voltar para o menu principal
                        case 3:
                            break;

                        default:
                            cout << "Comando invalido" << endl;
                            break;
                    }

                break;

            // sair do programa
            case 5:
                break;
            
            default:
                cout << "Comando invalido, por favor selecione novamente" << endl;
                cout << "/n";
                break;
        }
    }

    menu.MenuSaida();

    return 0;
}
