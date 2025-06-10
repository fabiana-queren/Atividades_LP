/*

Program: [Empresa Management System in C++]

Author: [Fabiana Queren]

Date: [10/06/2025]

Description: [This program demonstrates a simple company management system in C++.
It includes classes for Person, Employee, and Company, showcasing inheritance and polymorphism. The program creates instances of these classes, performs operations like hiring and paying employees, and manages memory effectively.]

License: [CC-BY]

*/

#include "include/empregado.hpp"

Empregado::Empregado(const std::string& nome, int idade, double salario): Pessoa(nome, idade, cpf), salario(salario) {}

Empregado::~Empregado() {
    std::cout << "Destruindo Empregado " << std::endl;
}