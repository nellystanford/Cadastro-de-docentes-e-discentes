#pragma once
#include "endereco.hpp"
#include <iostream>
#include <string>

class Pessoa {
    protected:
        std::string nome;
        std::string sexo;
        Endereco endereco;
        int idade;

    public:
        Pessoa();

        virtual void leAtributos() = 0;
        virtual void exibePessoas() = 0;
        virtual void exibeNomes() = 0;
};
