class Gerente : public Funcionario { 
private:
    float bonusMensal;

public:
    float getBonusMensal() {
        return bonusMensal;
    }

    float calcularSalarioFinal() override {
        return salarioBase + bonusMensal;
    }

    void exibirInformacoes() override {
        Funcionario::exibirInformacoes();
        cout << 
    }
}