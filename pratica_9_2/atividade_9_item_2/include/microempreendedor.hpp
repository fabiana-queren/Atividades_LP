#ifndef MICROEMPREENDEDOR_HPP
#define MICROEMPREENDEDOR_HPP

#include "pessoa.hpp"
#include "empresa.hpp"

class MicroEmpreendedor : public Pessoa, public Empresa {
public:
    MicroEmpreendedor(const std::string& nome, int idade, long cpf,
                      const std::string& razao_social, long cnpj);
    ~MicroEmpreendedor();

    void exibe_cpf() const;
    void exibe_cnpj() const;
};

#endif
