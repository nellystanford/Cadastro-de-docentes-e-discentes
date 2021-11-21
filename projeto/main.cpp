#include "includes.hpp"
#include <fstream>
#include <exception>

#define MAX_LENGTH_DISC 2
#define MAX_LENGTH_DOSC 2

using namespace std;

vector <Discente> disc(MAX_LENGTH_DISC);
vector <Docente> doc(MAX_LENGTH_DOSC);

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

                try
                {
                    if(countDoc < MAX_LENGTH_DOSC)
                    {
                        doc[countDoc].leAtributos();
                        countDoc++;
                    }
                    else
                    {
                        throw "Limite de docentes atingido!";
                        break;
                    } 
                    
                    cout << endl;
                    cout << "Docente adicionado com sucesso!" << endl;
                    sleep(2);
                    break;    
                }
                catch(const char* msg)
                {
                    cout << msg << endl;
                    sleep(2);
                    break;
                }


            // cadastro discente:
            case 2:
                system(CLEAR);

                try
                {
                    if(countDisc < MAX_LENGTH_DISC)
                    {
                        disc[countDisc].leAtributos();
                        countDisc++;
                    }
                    else
                    {
                        throw "Limite de discentes atingido!";
                        break;
                    } 
                    
                    cout << endl;
                    cout << "Discente adicionado com sucesso!" << endl;
                    sleep(2);
                    break;    
                }
                catch(const char* msg)
                {
                    cout << msg << endl;
                    sleep(2);
                    break;
                }

            // consulta de cadastros:
            case 3:
                system(CLEAR);
                cout << "        " << endl;
                cout << "DOCENTES: " << countDoc << endl;
                cout << "        " << endl;

                for(int i=0; i<countDoc; i++)
                {
                    doc[i].exibePessoas();
                }

                cout << "         " << endl;
                cout << "DISCENTES: " << countDisc << endl;
                cout << "         " << endl;

                for(int i=0; i<countDisc; i++)
                {
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

                            try
                            {
                                if(numRemocao > countDoc)
                                {
                                    throw "Número de docente inválido!";
                                    break;
                                } 
                                else
                                {
                                doc.erase(doc.begin() + numRemocao - 1);
                                countDoc--;
                                }
                            }
                            catch(const char* msg)
                            {
                                system(CLEAR);
                                std::cerr << msg << '\n';
                                sleep(2);
                                break;
                            }
                            

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

                            try
                            {
                                if(numRemocao > countDisc)
                                {
                                    throw "Número de discente inválido!";
                                    break;
                                } 
                                else
                                {
                                    disc.erase(disc.begin() + numRemocao - 1);
                                    countDisc--;
                                }
                            }
                            catch(const char* msg)
                            {
                                system(CLEAR);
                                std::cerr << msg << '\n';
                                sleep(2);
                                break;
                            }
                            
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
            
            //exportar cadastros para um arquivo
            case 5:

                system(CLEAR);

                for(int i=0; i<countDoc; i++) {
                    doc[i].exportaArquivo("docentes.txt");
                }

                for(int i=0; i<countDisc; i++) {
                    disc[i].exportaArquivo("discentes.txt");
                }

                cout << "Arquivos exportados com sucesso!" << endl;
                cout << "Pressione enter para continuar..." << endl;
                cin.ignore();
                getchar();

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
