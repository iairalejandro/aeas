#include <string>
#include <iostream>
#include "Persona.h"

class Cliente : public Persona {
public:
    Cliente(std::string n, std::string a) : Persona(n, a){}

    void print() override {
        std::cout << "Nombre: " << nombre << "\n" << "Apellido: " << apellido << std::endl;
    }

};
