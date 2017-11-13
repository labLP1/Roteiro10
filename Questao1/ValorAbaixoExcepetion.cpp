#include "ValorAbaixoExcepetion.h"

ValorAbaixoExcepetion::ValorAbaixoExcepetion( string erro ){
    this->erro = erro;
}

const string ValorAbaixoExcepetion::what() throw(){
    return erro;
}

ValorAbaixoExcepetion::~ValorAbaixoExcepetion(){
	
	
}
