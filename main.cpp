#include <string>
#include <iostream>
#include "Persona.h"
#include "Cliente.h"
#include "Empleado.h"

int main() {
    
    Cliente c("wbds","xd");
    Empleado e("wbds2","xd2",21312);

    c.print();
    std::cout << std::endl;
    e.print();

    return 0;
}