#include "TestaValidaNumero.h"


void TestaValidaNumero::validaNumero(int numero)
{
	if (numero <= 0) {
		throw ValorAbaixoException("Valor Abaixo");
	}
	if (numero > 100 && numero < 1000) {
		throw ValorAcimaException("Valor Acima");
	}
	if (numero >= 1000) {
		throw ValorMuitoAcimaException("Valor Muito Acima");
	}
}

