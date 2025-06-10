/*

Program: [Empresa Management System in C++]

Author: [Fabiana Queren]

Date: [10/06/2025]

Description: [This program demonstrates a simple company management system in C++.
It includes classes for Person, Employee, and Company, showcasing inheritance and polymorphism. The program creates instances of these classes, performs operations like hiring and paying employees, and manages memory effectively.]

License: [CC-BY]

*/

#include "include/pessoa.hpp"
#include "include/empregado.hpp"
#include "include/empresa.hpp"

int main() {
    Pessoa* p = new Pessoa("Lucas", 30, 1182345678);
    Empregado* e = new Empregado("Luis", 23, 1500.00);
    Pessoa* p2 = e;

    Empresa empresa(2905700001);
    // Ampliacao
    empresa.paga(*e);
    // Estreitamento
    empresa.contrata(*(static_cast<Empregado*> (p2))); 

    // Libera memoria
    delete p;
    delete e;
    return 0;
}
