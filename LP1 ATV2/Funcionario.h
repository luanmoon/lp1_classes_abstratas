#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

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
    void setNome(string novoNome);
    string getNome();

    void setSalarioBase(float novoSalario);
    float getSalarioBase();

    void setId(int novoId);
    int getId();

    virtual void exibirInformacoes();  
    virtual float calcularSalarioFinal() = 0;
    virtual ~Funcionario() = default; // Destrutor virtual para garantir destruição correta de subclasses
};

#endif 
