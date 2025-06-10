#include "include/empregado.hpp"
#include "include/microempreendedor.hpp"
#include <iostream>

MicroEmpreendedor::MicroEmpreendedor(const std::string& nome, int idade, long cpf,
                                     const std::string& razao_social, long cnpj)
    : Pessoa(nome, idade, cpf), Empresa(cnpj) {
    std::cout << "MicroEmpreendedor criado: " << nome << " - " << razao_social << std::endl;
}

MicroEmpreendedor::~MicroEmpreendedor() {
    std::cout << "Destruindo microempreendedor..." << std::endl;
}

void MicroEmpreendedor::exibe_cpf() const {
    std::cout << "CPF (MEI): " << cpf << std::endl;
}

void MicroEmpreendedor::exibe_cnpj() const {
    std::cout << "CNPJ (MEI): " << cnpj << std::endl;
}
