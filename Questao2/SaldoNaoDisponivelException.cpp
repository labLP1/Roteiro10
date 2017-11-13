#include "SaldoNaoDisponivelException.h"



const string SaldoNaoDisponivelException::what() throw()
{
	return erro;
}

SaldoNaoDisponivelException::SaldoNaoDisponivelException(string erro)
{
	this->erro = erro;
}

SaldoNaoDisponivelException::~SaldoNaoDisponivelException()
{
}
