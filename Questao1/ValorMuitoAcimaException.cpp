#include "ValorMuitoAcimaException.h"

ValorMuitoAcimaException::ValorMuitoAcimaException( string erro ){
    this->erro = erro;
}

virtual const string ValorMuitoAcimaException:: What() trow(){
    return erro;
}

ValorMuitoAcimaException::~ValorMuitoAcimaException(){
	
	
}