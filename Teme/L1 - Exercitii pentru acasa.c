//1.1 Scrieti un program care transformă o temperatură citită de la tastatură (numar intreg) din grade Celsius 
//in grade Farenheit.

#include <stdio.h>

int main() {
    
    int x;
    scanf("%d", &x);
    int F = 0;
    F = 32 + (9 * x / 5);
    printf("%d grade C = %d grade Farenheit", x, F);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Scrieti un program care citeste de la tastatura un numar real de ani si afiseaza numarul de luni, zile si ore 
//corespunzatoare. Presupunem ca un an are 365 de zile.

#include <stdio.h>

int main() {
    
    float a, l = 0, z = 0, o = 0;
    scanf("%f", &a);
    l = a * 12;
    z = a * 365;
    o = a * 8760;
    printf("%f ani inseamna %f luni\n", a, l);
    printf("%f ani inseamna %f zile\n", a, z);
    printf("%f ani inseamna %f ore", a, o);
    return 0;
}
