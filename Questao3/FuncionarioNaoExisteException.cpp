#include "FuncionarioNaoExisteException.h"



const string FuncionarioNaoExisteException::what() throw()
{
	return erro;
}

FuncionarioNaoExisteException::FuncionarioNaoExisteException(string erro)
{
	this->erro = erro;
}

FuncionarioNaoExisteException::~FuncionarioNaoExisteException()
{
}
