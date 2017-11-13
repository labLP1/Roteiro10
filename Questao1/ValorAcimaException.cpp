#include "ValorAcimaException.h"

ValorAcimaException::ValorAcimaException( string erro ){
    this->erro = erro;
}

const string ValorAcimaException::what() throw(){
    return erro;
}

ValorAcimaException::~ValorAcimaException(){
	
	
}