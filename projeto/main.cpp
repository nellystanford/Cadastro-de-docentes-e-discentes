#include "includes.hpp"
#include <fstream>

using namespace std;

vector <Discente> disc(100);
vector <Docente> doc(100);

int main () {
    system(CLEAR);

    int numRemocao;
    int op = 1, op2 = 0;
    int countDoc = 0, countDisc = 0;

    // objeto para acessar o arquivo
    ofstream arq;

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
            
            //exportar cadastros para um arquivo
            case 5:

                system(CLEAR);

                //abertura do arquivo paa escrita ao final dos dados já existentes
                arq.open("arquivo.txt", ios::app);

                //verificação de erro na abertura do arquivo
                if (!arq.is_open()) {
                    cout << "Erro ao abrir o arquivo" << endl;
                    sleep(2);
                    break;
                }

                arq << "DOCENTES: " << countDoc << endl;
               /* for(int i=0; i<countDoc; i++) {
                    doc[i].escrevePessoas(arq);
                }*/

                for(int i=0; i<countDoc; i++) {
                    arq << "-----------------------------------------------" << endl;
                    arq << "Nome: " << doc[i].getNome() << endl;
                    arq << "Sexo: " << doc[i].getSexo() << endl;
                    arq << "Endereco: " << doc[i].getEndereco().rua << ", " << 
                    doc[i].getEndereco().bairro << ". " << doc[i].getEndereco().CEP << "." << endl;
                    arq << "Idade: " << doc[i].getIdade() << endl;
                    arq << "Cadeira ensinada: " << doc[i].getCadeiraEnsinada() << endl;
                    arq << "-----------------------------------------------" << endl;
                }

                arq << endl;
                arq << "DISCENTES: " << countDisc << endl;

                for(int i=0; i<countDisc; i++) {
                    arq << "-----------------------------------------------" << endl;
                    arq << "Nome: " << disc[i].getNome() << endl;
                    arq << "Sexo: " << disc[i].getSexo() << endl;
                    arq << "Endereco: " << disc[i].getEndereco().rua << ", " << 
                    doc[i].getEndereco().bairro << ". " << disc[i].getEndereco().CEP << "." << endl;
                    arq << "Idade: " << disc[i].getIdade() << endl;
                    arq << "Ano de Entrada: " << disc[i].getAnoEntrada() << endl;
                    arq << "CRA: " << disc[i].getCRA() << endl;
                    arq << "-----------------------------------------------" << endl;
                }

                arq.close();

                cout << "Arquivo exportado com sucesso!" << endl;
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
