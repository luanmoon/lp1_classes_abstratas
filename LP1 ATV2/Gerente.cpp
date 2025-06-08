#include "Gerente.h"
#include <iostream>
using namespace std;

class Gerente : public Funcionario { 
private:
    float bonusMensal;

public:
    void setBonusMensal(float bonus) {
        bonusMensal = bonus;
    }
    float getBonusMensal() {
        return bonusMensal;
    }

    float calcularSalarioFinal() override {
        return salarioBase + bonusMensal;
    }

    void exibirInformacoes() override {
        Funcionario::exibirInformacoes();
        cout << "Bônus: " << bonusMensal << endl;
        cout << "Salário final: " << calcularSalarioFinal() << endl;
    }
};
