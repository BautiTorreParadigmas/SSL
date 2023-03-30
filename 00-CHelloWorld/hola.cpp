#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    FILE *output_f;
     output_f = fopen("output.txt", "w");

    fprintf(output_f, "Hola mundo :)");

    fclose(output_f);

    return 0;
}