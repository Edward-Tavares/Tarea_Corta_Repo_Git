#include <iostream>
#include "BolaCurva.h"
#include <stdlib.h>
#include <time.h>

using namespace std;

//Metodo what
//@return: Devuelve arreglo de caracteres en caso de que se llame la excepcion
const char* BolaCurva::what() const throw()
{
    return "Excepcion: numero menor a 25";
}