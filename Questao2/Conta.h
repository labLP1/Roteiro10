#ifndef CONTA_H
#define CONTA_H

#include "IConta.h"
#include "SaldoNaoDisponivelException.h"
#include <string>

using namespace std;

class Conta: public IConta
{
	private:
		string nomeCliente;
		double salarioMensal;
		string numeroConta;
		double saldo;
		double limite;

	public:
		void setNomeCliente(string nome);
		void setSalarioMensal(double salario);
		void setNumeroConta(string numero);
		void setSaldo(double saldo);
		void setLimite(double limite);

		string getNomeCliente();
		double getSalarioMensal();
		string getNumeroConta();
		double getSaldo();
		double getLimite();

		void definirLimite();
		void sacar(double valor);
		void depositar(double valor);

		Conta(string nome, double salario, string conta, double saldo);
		~Conta();
};

#endif // !CONTA_H
