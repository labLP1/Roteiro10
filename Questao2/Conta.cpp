#include "Conta.h"


void Conta::setNomeCliente(string nome)
{
	this->nomeCliente = nome;
}

void Conta::setSalarioMensal(double salario)
{
	this->salarioMensal = salario;
}

void Conta::setNumeroConta(string numero)
{
	this->numeroConta = numero;
}

void Conta::setSaldo(double saldo)
{
	this->saldo = saldo;
}

void Conta::setLimite(double limite)
{
	this->limite = limite;
}

string Conta::getNomeCliente()
{
	return nomeCliente;
}

double Conta::getSalarioMensal()
{
	return salarioMensal;
}

string Conta::getNumeroConta()
{
	return numeroConta;
}

double Conta::getSaldo()
{
	return saldo;
}

double Conta::getLimite()
{
	return limite;
}

void Conta::definirLimite()
{
	this->setLimite(2 * this->getSalarioMensal());
}

void Conta::sacar(double valor)
{
	if (this->getSaldo() >= valor) {
		double num = this->getSaldo() - valor;
		this->setSaldo(num);
	}
	else {
		throw SaldoNaoDisponivelException("Saldo nao Disponivel");
	}
}

void Conta::depositar(double valor)
{
	double num = this->getSaldo() + valor;
	this->setSaldo(num);
}

Conta::Conta(string nome, double salario, string conta, double saldo)
{
	this->setNomeCliente(nome);
	this->setSalarioMensal(salario);
	this->setNumeroConta(conta);
	this->setSaldo(saldo);
}

Conta::~Conta()
{
}
