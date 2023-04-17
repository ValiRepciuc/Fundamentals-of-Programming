//1.1 Pentrun un număr natural n dat, să se afișeze reprezentarea acestuia în baza b (b<10), n și b citite de la tastatură.

#include <stdio.h>

int main() {
    int n, raspuns=0,p=1,b;
    scanf("%d",&n);
    scanf("%d",&b);
    printf("Numarul %d in baza %d este",n,b);
    while(n>0){
        int restCurent = n%b;
        raspuns+=p*restCurent;
        p=p*10;
        n=n/b;
    }
    printf(" %d",raspuns);

    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Scrieti un program care citeste doua numere, reprezentand doi ani, si afiseaza in ce zi cade ziua programatorului in fiecare an dintre cei doi ani.

#include <stdio.h>

int main() {

    int n, b, z = 13, i, zb = 12;
    scanf("%d", &n);
    scanf("%d", &b);
    for (i = n; i <= b; i++) {
        if (i % 4 == 0) {
            printf("%d septembrie %d\n", zb, i);
        } else {
            printf("%d septembrie %d\n", z, i);
        }

    }
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Scrieti un program C care calculeaza suma seriei 1 +11 + 111 + 1111 + ... , cu n termeni. folositi variabile de tip long int pentru a retine suma.

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    long int suma=0, nr=1, total=0;
    for(int i=0; i<n-1;i++){
        suma=suma*10+nr;
        printf("%ld ",suma);
        total=total + suma;
        printf(" + ");
    }
    suma=suma*10+nr;
    total=total + suma;
    printf("%ld", suma);
    printf("\nSuma este : %ld.",total);

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Scrieti un program C pentru a verifica daca un numar citit de la tastatura, este numar Armstrong.
//
//Indicatie. Un numar intreg pozitiv este numar Armstrong daca, dat n numarul de cifre
//
//abcd... = a^n + b^n + c^n + d^n + ...

#include <stdio.h>
#include <math.h>
int main(){
    int n,contor=0,aux,sum=0,aux2,rest=0;
    scanf("%d",&n);
    aux2=aux=n;
    while(aux!=0){
        aux/=10;
        contor++;
    }
    while(aux2!=0){
        rest=aux2%10;
        sum = sum + pow(rest, contor);
        aux2/=10;
    }
    if(sum == n) printf("Numarul %d este numar Armstrong, cu suma %d", sum,n);
    else printf("Numarul %d NU este numar Armstrong, are suma %d", n,sum);
    return 0;

}
