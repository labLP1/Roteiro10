#ifndef CONTA_H
#define CONTA_H

#include <iostream>
#include <string>
#include "IConta.h"

using namespace std;

class Conta: public IConta{
    private:
    string nomeCliente;
    double salarioMensal;
    string numeroConta;
    double saldo;
    double limite;

    public:

    Conta( string nome, double salario, string conta, double saldo);
    void definirLimite();

    string getnomeCliente();
    double getsalarioMensal();
    string getnumeroConta();
    double getsaldo();
    double getlimite();

    void setnomeCliente(string NC);
    void setsalarioMensal(double SM);
    void setnumeroConta(string numeroConta);
    void setsaldo(double s);
    void setlimite(double l);

    void sacar(double valor);
    void depositar(double valor);

};

#endif
