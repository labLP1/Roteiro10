#include "ValorMuitoAcimaException.h"

ValorMuitoAcimaException::ValorMuitoAcimaException( string erro ){
    this->erro = erro;
}

const string ValorMuitoAcimaException::what() throw(){
    return erro;
}

ValorMuitoAcimaException::~ValorMuitoAcimaException(){
	
	
}