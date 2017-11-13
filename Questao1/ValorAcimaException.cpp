#include "ValorAcimaException.h"

ValorAcimaException::ValorAcimaException( string erro ){
    this->erro = erro;
}

virtual const string ValorAcimaException:: What() trow(){
    return erro;
}

ValorAcimaException::~ValorAcimaException(){
	
	
}