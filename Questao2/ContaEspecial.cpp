#include "ContaEspecial.h"


ContaEspecial::ContaEspecial(string nome, double salario, string numero, double saldo):Conta(nome, salario, numero, saldo)
{
}

void ContaEspecial::definirLimite()
{
	this->setLimite(3 * this->getSalarioMensal());
}

ContaEspecial::~ContaEspecial()
{
}
