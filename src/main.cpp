#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "BolaCurva.h"

int generar_aleatorio(); //genera numero aleatorio

using namespace std;

int main()
{

    srand(time(NULL)); //Generacion de semilla inicial basada en el tiempo de sistema

    int num = 0;
    int excp_calls = 0;
    for (int i = 0; i < 1000; i++)
    {
        num = generar_aleatorio(); //generacion de numero
        try
        {
            if (num < 25)
            {
                throw BolaCurva{};
            }
        }
        catch (const BolaCurva &e)
        {
            excp_calls++;
            std::cerr << e.what() << '\n';
        }
    }

    cout << endl;
    cout << "La excepcion ha sido llamada " << excp_calls << " veces." << endl;
    cout << endl;

    return 0;
}

//Metodo generar_aleatorio
//@return: entero definido por ran() % 100
int generar_aleatorio()
{
    return rand() % 100;
}
