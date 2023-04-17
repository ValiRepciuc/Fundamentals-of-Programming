//1.1 Sa se scrie un program care citeste n numere reale (n citit de la tastatura) si afla care este maximul, respectiv minimul dintre acestea.

#include <stdio.h>

int main() {
    double v[50], minim=0, maxim=0;
    int n;
    scanf("%d", &n);
    for(int i=0; i<n;i++){
        scanf("%lf",&v[i]);
    }
    for(int i=0; i<n; i++){
        if(maxim<v[i])
            maxim=v[i];
    }
    for(int i=0; i<n; i++){
        if(minim>v[i])
            minim=v[i];
    }
    printf("Cele %d numere sunt in intervalul [%lf,%lf].", n,minim,maxim);
    return 0;
}



~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Sa se scrie un program care citeste un numar intreg si afiseaza media cifrelor sale.


#include <stdio.h>

int main() {

    double media = 0, x;
    int n, uc = 0, suma = 0;
    scanf("%d", &n);
    while (n != 0) {
        uc = n % 10;
        n = n / 10;
        suma = suma + uc;
        x++;
    }
    media = suma / x;
    if (media < 0)
        media = media * (-1);
    printf("Media cifrelor este %lf.", media);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Scrieti un program care, pentru un numar intreg citit de la tastatura, calculeaza cifra maxima a acestuia.

#include <stdio.h>

int main() {
    int n, uc=0, maxim=0;
    scanf("%d",&n);
    maxim=n%10;
    printf("Numarul %d",n);
    while(n!=0){
        if(n<0)
            n=n*(-1);
        uc=n%10;
        n=n/10;
        if(maxim<uc)
            maxim=uc;
    }
    printf(" are cifra maxima %d.",maxim);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//1.4 Sa se scrie un program care, pentru un numar natural dat, creeaza un nou numar,
// format doar din cifrele pare ale acestuia (in aceeasi ordine in care acestea apar in numarul original!).

#include <stdio.h>

int main() {

    int n, uc = 0, pare = 0, x = 1;
    scanf("%d", &n);
    printf("Numarul format din cifrele pare ale lui %d este ", n);

    while (n != 0) {
        uc = n % 10;
        n = n / 10;
        if (uc % 2 == 0) {
            pare = pare + uc * x;
            x *= 10;
        }
    }
    printf("%d.", pare);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Să se scrie un program care determină frecvența de apariție a unei cifre d  într-un număr dat  n (presupunem ca numarul este scris in baza 10).

#include <stdio.h>

int main() {
    int n, d, x = 0, uc = 0;
    scanf("%d", &n);
    scanf("%d", &d);
    printf("Numarul %d are ", n);
    do{
        if(n<0)
            n=n*(-1);
        uc = n % 10;
        n = n / 10;
        if (uc == d) {
            x++;
        }

    } while(n!=0);
    printf("%d cifre de %d.", x, d);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.6 Se da un nr. natural d nenul si un sir cu n numere. Aflati numarul maxim din sir, care se divide cu d.

#include <stdio.h>

int main() {
    int x, n, v[50], numar_maxim = 0;

    scanf("%d", &x);
    scanf("%d", &n);


    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        if (v[i] % x == 0) {
            numar_maxim = v[i];
        }
    }
    for (int i = 0; i < n; i++) {
        if (numar_maxim < v[i] && v[i] % x == 0) {
            numar_maxim = v[i];
        }
    }
    printf("Numarul maxim care se divide cu %d este %d.", x, numar_maxim);

    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.7 Calculati rasturnatul (sau oglinditul) unui numar natural n citit de la tastatura.

#include <stdio.h>

int main() {

    int n, oglindit = 0;
    scanf("%d", &n);
    if (n < 0)
        n = n * (-1);
    printf("Oglinditul lui %d este ", n);
    while (n != 0) {
        oglindit = oglindit * 10 + n % 10;
        n = n / 10;

    }
    printf("%d.", oglindit);

    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.8 Pentru un numar natural dat, sa se afiseze reprezentarea acetuia in baza 2.

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    printf("Numarul %d in baza 2 este", n);

    long long int raspuns = 0, p = 1;
    while (n > 0) {
        int restCurent = n % 2;
        raspuns += p * restCurent;
        p = p * 10;
        n = n / 2;
    }
    printf(" %lld", raspuns);

    return 0;
}
