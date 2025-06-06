#include <iostream>
using namespace std;

class Funcionario {
protected:
    string nome;
    float salarioBase;

private:
    int id;

public:
    void setNome(string) {
        nome = novoNome;
    }
    
    string getNome() {
        return nome;
    }

    void setSalarioBase(float) {
        salarioBase = novoSalario;
    }
    
    string getSalarioBase() {
        return salarioBase;
    }

    void setId(int) {
        id = novoId;
    }
    
    string getId() {
        return id;
    }

virtual void exibirInformacoes() {
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Tipo: " << << endl;

}

virtual float calcularSalarioFinal() = 0
};
