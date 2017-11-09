#ifndef VALORACIMAEXCEPTION_H
#define VALORACIMAEXCEPTION_H

#include <string>
#include <exception>
using namespace std;


class ValorAcimaException: public exception{
     public:
       virtual const string what() throw();
       virtual ~ValorAcimaException( string erro ); 
       ValorAcimaException( string erro);
         
    private:
        string erro;
        
};


#endif
