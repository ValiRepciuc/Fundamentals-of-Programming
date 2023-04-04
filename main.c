//1.1 Să se realizeze un program C care afiseaza mesajul:  Bine ai venit!

#include <stdio.h>

int main() {

    printf("Bine ai venit!");
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//1.2 Scrieţi un program care citeşte două numere intregi de la tastatură şi afişează suma lor.


#include <stdio.h>

int main() {

    int nr1, nr2, suma = 0;
    scanf("%d", &nr1);
    scanf("%d", &nr2);
    suma = nr1 + nr2;
    printf("Suma este %d.", suma);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Scrieți un program care citește un număr întreg de la tastatură și verifică dacă este par.


#include <stdio.h>
int main() {
    int n;
    scanf("%i", &n);
    if (n % 2 == 1) {
        printf("Numarul %i este impar.", n);
    } else {
        printf("Numarul %i este par.", n);
    }
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Să se scrie un program care, fiind date două numere întregi a și b, verifica dacă unul dintre ele
//este egal cu 10 sau dacă suma lor este 10 si afiseaza un mesaj corespunzator pe ecran.


#include <stdio.h>
int main() {

    int a, b, s;
    scanf("%d", &a);
    scanf("%d", &b);
    s = a + b;
    if (s == 10 || a == 10 || b == 10) {
        printf("Un numar sau suma lor este 10");
    } else {
        printf("Numerele si suma lor nu sunt 10");
    }
    return 0;
}