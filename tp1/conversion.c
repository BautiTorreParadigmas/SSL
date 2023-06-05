#include <stdio.h>
#include "Conversion.h"

void Celsius() {
    int celsius;

    for (celsius = 0; celsius <= 100; celsius += 10) {
        double fahrenheit = (celsius * 9.0 / 5.0) + 32.0;
        printf("%3d°C %6.1f°F\n", celsius, fahrenheit);
    }
}

void Fahrenheit() {
    int fahrenheit;

    for (fahrenheit = 0; fahrenheit <= 300; fahrenheit += 20) {
        double celsius = (fahrenheit - 32.0) * 5.0 / 9.0;
        printf("%3d°F %6.1f°C\n", fahrenheit, celsius);
    }
}


