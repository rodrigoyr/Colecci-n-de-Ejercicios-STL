#include <iostream>

// Usando la palabra clave namespace podemos agrupar funciones, variables y clases
// en un mismo espacio de nombres. Esto nos permite crear funciones con el mismo
// nombre pero que hacen cosas diferentes.
// El uso de namespace es muy común en proyectos grandes para poder agrupar funciones
// que tienen relación entre si.
// Para acceder a los elementos dentro de un namespace se usa el operador de resolución
// de alcance (::).
// En este ejemplo tenemos un namespace Ciencia y dentro de este un namespace Fisica.
// Dentro del namespace Fisica tenemos una función que calcula la energía de una masa
// usando la fórmula E = m * c^2.
// Para acceder a la función calcularEnergia tenemos que usar el operador de resolución
// de alcance de la siguiente forma: Ciencia::Fisica::calcularEnergia(10).
// El namespace std es un namespace que ya viene definido en el compilador y que tiene
// definidas varias funciones y variables que son muy usadas en C++.

namespace Ciencia {
    namespace Fisica {
        double calcularEnergia(double masa);
    }
}

namespace Ciencia {
    namespace Fisica {
        const double c = 299792458;
        double calcularEnergia(double masa) {
            return masa * c * c;
        }
    }
}

int main() {
    std::cout << "Energia: " << Ciencia::Fisica::calcularEnergia(10) << std::endl;
    return 0;
}