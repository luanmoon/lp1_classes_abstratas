#ifndef GERENTE_H
#define GERENTE_H

#include "Funcionario.h"

class Gerente : public Funcionario {
private:
    float bonusMensal;

public:
    void setBonusMensal(float bonus);
    float getBonusMensal() const;

    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};

#endif 
