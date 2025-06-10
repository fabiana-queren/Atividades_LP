#include "include/pessoa.hpp"
#include "include/empregado.hpp"
#include "include/empresa.hpp"
#include "include/microempreendedor.hpp"  // Adicionado

int main() {
    Pessoa* p = new Pessoa("Lucas", 30, 1182345678);
    Empregado* e = new Empregado("Luis", 23, 1500.00);
    Pessoa* p2 = e;

    Empresa empresa(2905700001);
    empresa.paga(*e);
    empresa.contrata(*(static_cast<Empregado*>(p2)));

    
    MicroEmpreendedor me("Fabiana", 35, 123456790, "Fabiana micro empresaria", 987654320);
    me.exibe_cpf();
    me.exibe_cnpj();

    delete p;
    delete e;
    return 0;
}
