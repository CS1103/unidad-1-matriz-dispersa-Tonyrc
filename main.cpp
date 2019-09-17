#include <iostream>
#include <ctime>
#include "Matriz.h"

int main() {
    srand(time(NULL));
    auto a = new Matriz(3,3);
    auto b = new Matriz(3,3);
    a->LlenadoMatriz();
    b->LlenadoMatriz();

    std::cout<<"Prueba con Matrices 3x3\n\n";
    std::cout<<"Matriz A\n";
    a->ImprimirMatriz();

    std::cout<<"Matriz B\n";
    b->ImprimirMatriz();

    std::cout<<"Multiplicacion Matriz A y B\n";
    auto c = new Matriz(3,3);
    *c = (*a)*(*b);
    c->ImprimirMatriz();

    std::cout<<"Suma Matriz A y B\n";
    auto d = new Matriz(3,3);
    *d = (*a) + (*b);
    d->ImprimirMatriz();

    std::cout<<"Multiplicacion A por un escalar\n";
    auto e = new Matriz(3,3);
    *e = (*a)*5;
    e->ImprimirMatriz();

    std::cout<<"Transpuesta de E=A*5\n";
    auto f = new Matriz(3,3);
    *f = e->Transpuesta();
    f->ImprimirMatriz();

}