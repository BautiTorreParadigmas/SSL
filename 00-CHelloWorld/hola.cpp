#include <iostream>
#include <stdio.h>
using namespace std;

int main(){
    FILE *output_file;
     output_file = fopen("out.txt", "w");
    fprintf(output_file, "Hola mundo");
    fclose(output_file);

    return 0;
}