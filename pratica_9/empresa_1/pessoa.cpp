/*

Program: [Empresa Management System in C++]

Author: [Fabiana Queren]

Date: [10/06/2025]

Description: [This program demonstrates a simple company management system in C++.
It includes classes for Person, Employee, and Company, showcasing inheritance and polymorphism. The program creates instances of these classes, performs operations like hiring and paying employees, and manages memory effectively.]

License: [CC-BY]

*/
#include "include/pessoa.hpp"

Pessoa::Pessoa(const std::string& nome, int idade, int cpf) : nome(nome), idade(idade), cpf(cpf) {}

const std::string& Pessoa::pega_nome() {
    return nome;
}

Pessoa::~Pessoa() {
    std::cout << "Destruindo Pessoa: " << nome << std::endl;
}