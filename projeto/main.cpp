#include "includes.hpp"

using namespace std;

vector <Discente> disc(100);
vector <Docente> doc(100);

int main () {
    system(CLEAR);

    int numRemocao;
    int op = 1, op2 = 0;
    int countDoc = 0, countDisc = 0;

    Menu menu;

    // menu de boas-vindas
    menu.MenuEntrada();

    while(op) {
        system(CLEAR);

        //menu de seleção de ação
        menu.MenuPrincipal();

        cin >> op;
        switch(op) {

            // sair do programa
            case 0:
                break;
            // cadastro docente:
            case 1:
                system(CLEAR);

                doc[countDoc].leAtributos();
                cout << endl;
                cout << "Docente adicionado com sucesso!" << endl;
                countDoc++;
                sleep(1.5);
                break;

            // cadastro discente:
            case 2:
                system(CLEAR);

                disc[countDisc].leAtributos();
                cout << endl;
                cout << "Discente adicionado com sucesso!" << endl;
                countDisc++;
                sleep(1.5);
                break;

            // consulta de cadastros:
            case 3:
                system(CLEAR);
                cout << "        " << endl;
                cout << "DOCENTES: " << countDoc << endl;
                cout << "        " << endl;

                for(int i=0; i<countDoc; i++) {
                    doc[i].exibePessoas();
                }

                cout << "         " << endl;
                cout << "DISCENTES: " << countDisc << endl;
                cout << "         " << endl;

                for(int i=0; i<countDisc; i++) {
                    disc[i].exibePessoas();
                }
                cout << "Pressione enter para continuar..." << endl;
                cin.ignore();
                getchar();
                break;
            
            // remoção de cadastro:
            case 4:
                system(CLEAR);
                menu.MenuRemocao();
                cin >> op2;

                    switch(op2) {

                        // remover docente 
                        case 1:
                            system(CLEAR);
                            for(int i=0; i<countDoc; i++) {
                                cout << "Docente " << i+1 << ": ";
                                doc[i].exibeNomes();
                                cout << endl;
                            }

                            cout << "Digite o número do docente que deseja remover: " << endl;
                            cin >> numRemocao;

                            doc.erase(doc.begin() + numRemocao - 1);
                            countDoc--;
                            cout << "Docente removido com sucesso!" << endl;
                            sleep(1.5);

                            break;

                        //remover discente
                        case 2:
                            system(CLEAR);
                            for(int i=0; i<countDisc; i++) {
                                cout << "Discente " << i+1 << ": ";
                                disc[i].exibeNomes();
                                cout << endl;
                            }


                            cout << "Digite o número do discente que deseja remover: " << endl;
                            cin >> numRemocao;

                            disc.erase(disc.begin() + numRemocao - 1);
                            countDisc--;
                            cout << "Discente removido com sucesso!" << endl;
                            sleep(1.5);
                            break;

                        //voltar para o menu principal
                        case 3:
                            break;

                        default:
                            system(CLEAR);
                            cout << "Comando invalido" << endl;
                            sleep(2);
                            break;
                    }

                break;
            default:
                system(CLEAR);
                cout << "Comando invalido, por favor selecione novamente" << endl;
                cout << "/n";
                sleep(2);
        }
    }

    menu.MenuSaida();

    return 0;
}
