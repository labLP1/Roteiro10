#include "OrcamentoExtouradoException.h"



const string OrcamentoExtouradoException::what() throw()
{
	return erro;
}

OrcamentoExtouradoException::OrcamentoExtouradoException(string erro)
{
	this->erro = erro;
}

OrcamentoExtouradoException::~OrcamentoExtouradoException()
{
}
