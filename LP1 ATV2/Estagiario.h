#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H

#include "Funcionario.h"
class Estagiario : public Funcionario {
private:
    int horasTrabalhadas;

public:
    void setHorasTrabalhadas(int h);
    int getHorasTrabalhadas() const;

    float calcularSalarioFinal() const override;
    void exibirInformacoes() const override;
};

#endif 
