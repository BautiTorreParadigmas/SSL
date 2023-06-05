#include <stdio.h>
#include <assert.h>
#include "Conversion.h"

void testCelsius() {
    // Agregar pruebas unitarias para la función Celsius
    double result = Celsius(32.0);
    assert(result == 0.0);
}

void testFahrenheit() {
    // Agregar pruebas unitarias para la función Fahrenheit
    double result = Fahrenheit(0.0);
    assert(result == 32.0);
}

int main() {
    testCelsius();
    testFahrenheit();

    printf("Todas las pruebas pasaron exitosamente.\n");

    return 0;
}





