#include <iostream>
#include "ListaGen.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    ListaGen<int> * lista1 = new ListaGen<int>;
    lista1->insertar_cola(4);
    lista1->insertar_cola(7);
    lista1->insertar_cola(9);
    lista1->insertar_cola(10);
    std::cout << lista1->at(0);
    return 0;
}
