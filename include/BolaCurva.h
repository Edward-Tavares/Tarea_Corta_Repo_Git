#ifndef BOLA_CURVA_H
#define BOLA_CURVA_H

using namespace std;

class BolaCurva : public std::exception {
    public:
        //Metodo sobrecargado de std::exception
        const char* what() const throw() override;
};

#endif