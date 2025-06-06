class Desenvolvedor : public Funcionario {
private:
    int quantidadeDeProjetos;

public: 
    void setQuantidadeDeProjetos(int q) {
        quantidadeDeProjetos = q;
    }
    int getQuantidadeDeProjetos() const {
        return quantidadeDeProjetos; 
    }

    float calcularSalarioFinal() override {
        return salarioBase + (500 * quantidadeDeProjetos);
    }

    void exibirInformacoes() override {
        Funcionario::exibirInformacoes();
        cout << "Quantidade de Projetos: " << quantidadeDeProjetos << endl;
        cout << "Salário Final: R$ " << calcularSalarioFinal() << endl;
    }
};
