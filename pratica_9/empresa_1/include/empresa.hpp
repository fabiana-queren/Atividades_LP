/*

Program: [Empresa Management System in C++]

Author: [Fabiana Queren]

Date: [10/06/2025]

Description: [This program demonstrates a simple company management system in C++.
It includes classes for Person, Employee, and Company, showcasing inheritance and polymorphism. The program creates instances of these classes, performs operations like hiring and paying employees, and manages memory effectively.]

License: [CC-BY]

*/
#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include "pessoa.hpp"
#include "empregado.hpp"

class Empresa {
    protected:
    int cnpj;
public:
    Empresa(int cnpj);
    void paga(Pessoa& pes);
    void contrata(Empregado& emp);
    virtual ~Empresa();
};

#endif /* EMPRESA_HPP */