/*

Program: [Empresa Management System in C++]

Author: [Fabiana Queren]

Date: [10/06/2025]

Description: [This program demonstrates a simple company management system in C++.
It includes classes for Person, Employee, and Company, showcasing inheritance and polymorphism. The program creates instances of these classes, performs operations like hiring and paying employees, and manages memory effectively.]

License: [CC-BY]

*/
#include "include/empresa.hpp"

Empresa::Empresa(int cnpj) : cnpj(cnpj) {}

void Empresa::paga(Pessoa& pes) {
    std::cout << "Pagando a pessoa: " << pes.pega_nome() << std::endl;
}

void Empresa::contrata(Empregado& emp) {
    std::cout << "Contratando empregado: " << emp.pega_nome() << std::endl;
}

Empresa::~Empresa() {
    std::cout << "Destruindo Empresa:" << cnpj << std::endl;
}