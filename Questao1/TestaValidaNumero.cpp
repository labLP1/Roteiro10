#include "TestaValidaNumero.h"

void TestaValidaNumero::validaNumero( int main ){
    if( num <= 0 ){  
      
        throw ValorAbaixoException("Valor Abaixo Exception");
    }
    if( num > 100 && num < 1000 ){ 
        throw ValorAcimaException("Valor Acima Exception");
 }
    if( num >= 1000 ) { 
        throw ValorMuitoAcimaException("Valor Muito Acima Exception"); 
    
}

}
