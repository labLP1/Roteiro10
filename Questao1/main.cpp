#include <iostream>
#include <string>
#include <exception>

using namespace std;

#include "TestaValidaNumero.h"
#include "ValorMuitoAcimaException.h"
#include "ValorAcimaException.h"
#include "ValorAbaixoExcepetion.h"

int main(){
    
    TestaValidaNumero t;
	int numero;
	
	cout << "Digite um numero: "; 
	 cin >> numero;
	
    try{    t.validaNumero(numero); }
	
    catch(ValorAbaixoExcepetion va){
        cout << "ERROR: " << va.what() << endl;
    }  
    catch(ValorAcimaException vc ){
        cout << "ERROR: " << vc.what() << endl;
    }
    catch( ValorMuitoAcimaException vm){
        cout << "ERROR: " << vm.what() << endl;         
    }    
	
	system("PAUSE");
    return 0;

}

