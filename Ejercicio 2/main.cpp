#include <iostream>
#include "triangulo.cpp"
#include "circulo.cpp"

int main() {
    std::cout << "Area del triangulo: " << Geometria::calcularAreaTriangulo(5, 3) << std::endl;
    std::cout << "Area del circulo: " << Geometria::calcularAreaCirculo(3) << std::endl;
    return 0;
}
