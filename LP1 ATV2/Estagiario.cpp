class Estagiario : public Funcionario {
private:
    int horasTrabalhadas;

public:
    void setHorasTrabalhadas(int h) {
        horasTrabalhadas = h;
    }

    int getHorasTrabalhadas() const {
        return horasTrabalhadas;
    }

    float calcularSalarioFinal() const override {
        return salarioBase * (horasTrabalhadas / 160.0f);
    }

    void exibirInformacoes() const override {
        Funcionario::exibirInformacoes();
        cout << "Tipo: Estagiário" << endl;
        cout << "Horas trabalhadas: " << horasTrabalhadas << endl;
        cout << "Salário final: " << calcularSalarioFinal() << endl;
    }
};
