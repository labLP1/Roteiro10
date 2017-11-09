#include "Conta.h"

Conta::Conta( string nome, double salario, string conta, double saldo){
    this->setnomeCliente(nome);
    this->setsalarioMensal(salario);
    this->setnumeroConta(conta);
    this->setsaldo(saldo);
    this->definirLimite();
}

void Conta::setnomeCliente(string NC){ this->nomeCliente = NC; }
void Conta::setsalarioMensal(double salarioMensal){ this->salarioMensal = salarioMensal; }
void Conta::setnumeroConta(string numeroConta){ this->numeroConta = numeroConta; }
void Conta::setsaldo( double saldo ){ this->saldo = saldo; }
void Conta::setlimite(double l){ this->limite = l; }

string Conta::getnomeCliente(){ return nomeCliente; }
double Conta::getsalarioMensal(){ return salarioMensal; }
string Conta::getnumeroConta(){ return numeroConta; }
double Conta::getsaldo(){ return saldo; }
double Conta::getlimite(){ return limite; }

void Conta::sacar(double valor){
    this->saldo-=valor;
}

void Conta::depositar(double valor){
    this->saldo+=valor;
}

void Conta::definirLimite(){
    this->limite = 2*this->salarioMensal;
}
