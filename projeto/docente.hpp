#pragma once
#include "pessoa.hpp"

class Docente : public Pessoa {
    private:
        std::string cadeiraEnsinada;
    
    public:
        Docente();
        void leAtributos();
        void exibePessoas();
        void exibeNomes();
};
