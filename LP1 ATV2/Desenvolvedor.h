#ifndef DESENVOLVEDOR_H
#define DESENVOLVEDOR_H

#include "Funcionario.h" 
class Desenvolvedor : public Funcionario {
private:
    int quantidadeDeProjetos;

public:
    void setQuantidadeDeProjetos(int q);
    int getQuantidadeDeProjetos() const;

    float calcularSalarioFinal() override;
    void exibirInformacoes() override;
};

#endif 
