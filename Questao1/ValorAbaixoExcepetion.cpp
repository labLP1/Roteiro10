#include "ValorAbaixoException.h"

ValorAbaixoException::ValorAbaixoException( string erro ){
    this->erro = erro;
}

virtual const string ValorAbaixoException:: What() trow(){
    return erro;
}

ValorAbaixoException::~ValorAbaixoException(){
	
	
}
