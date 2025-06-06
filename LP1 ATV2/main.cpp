#include <iostream>
#include <vector>
#include <iomanip>
using namespace std;

int main() {
    vector<Funcionario*> funcionarios;
    int tipo;

    for (int i = 0; i < 6; ++i) {
        cout << "\nCadastro de Funcionário " << i + 1 << endl;
        cout << "1 - Desenvolvedor\n2 - Gerente\n3 - Estagiário\nEscolha o tipo: ";
        cin >> tipo;

        Funcionario* f = nullptr;
        int id;
        string nome;
        float salarioBase;

        cout << "ID: ";
        cin >> id;
        cout << "Nome: ";
        cin.ignore();
        getline(cin, nome);
        cout << "Salário Base: ";
        cin >> salarioBase;

        if (tipo == 1) {
            int projetos;
            cout << "Quantidade de Projetos: ";
            cin >> projetos;

            Desenvolvedor* d = new Desenvolvedor();
            d->setId(id);
            d->setNome(nome);
            d->setSalarioBase(salarioBase);
            d->setQuantidadeDeProjetos(projetos);
            f = d;

        } else if (tipo == 2) {
            float bonus;
            cout << "Bônus Mensal: ";
            cin >> bonus;

            Gerente* g = new Gerente();
            g->setId(id);
            g->setNome(nome);
            g->setSalarioBase(salarioBase);
            g->setBonusMensal(bonus);
            f = g;

        } else if (tipo == 3) {
            int horas;
            cout << "Horas Trabalhadas: ";
            cin >> horas;

            Estagiario* e = new Estagiario();
            e->setId(id);
            e->setNome(nome);
            e->setSalarioBase(salarioBase);
            e->setHorasTrabalhadas(horas);
            f = e;
        } else {
            cout << "Tipo inválido. Tente novamente.\n";
            --i;
            continue;
        }

        funcionarios.push_back(f);
    }

    for (Funcionario* f : funcionarios) {
        cout << "ID: " << f->getId() << endl;
        cout << "Nome: " << f->getNome() << endl;

        cout << fixed << setprecision(2);

        if (Desenvolvedor* d = dynamic_cast<Desenvolvedor*>(f)) {
            cout << "Tipo: Desenvolvedor" << endl;
            cout << "Projetos: " << d->getQuantidadeDeProjetos() << endl;
            cout << "Salário base: " << d->getSalarioBase() << endl;
            cout << "Salário final: " << d->calcularSalarioFinal() << endl;
        }
        else if (Gerente* g = dynamic_cast<Gerente*>(f)) {
            cout << "Tipo: Gerente" << endl;
            cout << "Bônus: " << g->getBonusMensal() << endl;
            cout << "Salário base: " << g->getSalarioBase() << endl;
            cout << "Salário final: " << g->calcularSalarioFinal() << endl;
        }
        else if (Estagiario* e = dynamic_cast<Estagiario*>(f)) {
            cout << "Tipo: Estagiário" << endl;
            cout << "Horas trabalhadas: " << e->getHorasTrabalhadas() << endl;
            cout << "Salário base: " << e->getSalarioBase() << endl;
            cout << "Salário final: " << e->calcularSalarioFinal() << endl;
        }
    }

    for (Funcionario* f : funcionarios) {
        delete f;
    }

    return 0;
}
