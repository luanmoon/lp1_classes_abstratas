#ifndef ESTAGIARIO_H
#define ESTAGIARIO_H

#include "Funcionario.h" // Certifique-se de que a classe Funcionario esteja corretamente definida

class Estagiario : public Funcionario {
private:
    int horasTrabalhadas;

public:
    void setHorasTrabalhadas(int h);
    int getHorasTrabalhadas() const;

    float calcularSalarioFinal() const override;
    void exibirInformacoes() const override;
};

#endif // ESTAGIARIO_H
