// OMPtest.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//
#include <iostream>
#include <omp.h>

int main()
{
    std::cout << "Verificando la ejecucion de las directivas OPM!\n";
    #ifdef _OPENMP
        std::cout << "OMP disponible y funcionando!\n";
    #endif // DEBUG
}
