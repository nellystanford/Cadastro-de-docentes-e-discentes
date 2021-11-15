#pragma once
#include "pessoa.hpp"

class Discente : public Pessoa {
    private:
        int anoEntrada;
        float CRA;
    
    public:
        Discente();
        void leAtributos();
        void exibePessoas();
        void exibeNomes();
        void exportaArquivo(std::string nomeArquivo);
};
