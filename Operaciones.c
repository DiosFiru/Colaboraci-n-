#include <stdio.h>

int main()
{
    int base, altura, area;
    base = 5;
    altura = 10;
    area = base * altura / 2;
    printf("El area de un triangulo de base %i y altura %i es %i\n", base, altura, area);
    
    float radio, pi, area2;
    radio = 6;
    pi = 3.1416;
    area2 = pi * radio*radio;
    printf("El area de un circulo de radio %f es de %f", radio, area2);
