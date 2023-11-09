#include <string>
#include <iostream>
#include "Persona.h"

class Empleado : public Persona {
public:
    int id;
    Empleado(std::string n, std::string a, int _id) : Persona(n, a){
        id = _id;
    }

    void print() override {
        std::cout << "Nombre: " << nombre << "\nApellido: " << apellido << "\nID: " << id << std::endl;

    }

};
