#include <iostream>
#include <string>
#include <exception>

using namespace std;

#include "TestaValidaNumero.h"
#include "ValorMuitoAcimaException.h"
#include "ValorAcimaException.h"
#include "ValorAbaixoException.h"

int main(){
    
    TestaValidaNumero t;
    try{    t.validaNumero(1000); }
    catch(ValorAbaixoException va){
        cout << "ERROR: " << va.what() << endl;
    }  
    catch(ValorAcimaException vc ){
        cout << "ERROR: " << vc.what() << endl;
    }
    catch( ValorMuitoAcimaException vm){
        cout << "ERROR: " << vm.what() << endl;         
    }    
    return 0;

}

