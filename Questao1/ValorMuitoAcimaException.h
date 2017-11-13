#ifndef VALORMUITOACIMAEXCEPTION_H
#define VALORMUITOACIMAEXCEPTION_H

#include <string>
#include <exception>
using namespace std;


class ValorMuitoAcimaException: public exception{
     public:
       virtual const string what() throw();
       ~ValorMuitoAcimaException( ); 
       ValorMuitoAcimaException( string erro);
         
    private:
        string erro;
};



#endif
