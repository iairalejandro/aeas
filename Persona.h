#ifndef PERSONA_H
#define PERSONA_H
#include <string>

class Persona {

protected:
    std::string nombre;
    std::string apellido;

public:
    Persona(std::string n, std::string a) {
        nombre = n;
        apellido = a;
    }

    virtual void print() = 0;

};

#endif