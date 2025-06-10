/*

Program: [Empresa Management System in C++]

Author: [Fabiana Queren]

Date: [10/06/2025]

Description: [This program demonstrates a simple company management system in C++.
It includes classes for Person, Employee, and Company, showcasing inheritance and polymorphism. The program creates instances of these classes, performs operations like hiring and paying employees, and manages memory effectively.]

License: [CC-BY]

*/

#ifndef PESSOA_HPP
#define PESSOA_HPP

#include <iostream>
#include <string>

class Pessoa {
protected:
    std::string nome;
    int idade;
    int cpf;

public:
    Pessoa(const std::string& nome, int idade, int cpf);
    const std::string& pega_nome();
    virtual ~Pessoa();
};

#endif /* PESSOA_HPP */