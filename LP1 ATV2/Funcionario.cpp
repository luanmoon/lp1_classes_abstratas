#include "Funcionario.h"
#include <iostream>
#include <string>
using namespace std;

class Funcionario {
protected:
    string nome;
    float salarioBase;

private:
    int id;

public:
    void setNome(string novoNome) {
        nome = novoNome;
    }
    
    string getNome() {
        return nome;
    }

    void setSalarioBase(float novoSalario) {
        salarioBase = novoSalario;
    }
    
    float getSalarioBase() {
        return salarioBase;
    }

    void setId(int novoId) {
        id = novoId;
    }
    
    int getId() {
        return id;
    }

virtual void exibirInformacoes() {
    cout << "ID: " << id << endl;
    cout << "Nome: " << nome << endl;
    cout << "Tipo: " << salarioBase << endl;

}

virtual float calcularSalarioFinal() = 0;
};
