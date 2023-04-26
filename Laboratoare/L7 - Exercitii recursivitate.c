// 1.1 Scrieti o functie recursiva care calculeaza puterea n a unui numar b (n si b primite ca parametri).

#include <stdio.h>

long int putere(int b, int n) {

    if(n==0)
        return 1;
    else if(n==1)
        return b;
    else
        return b*putere(b,n-1);

}

int main() {
    int n, b;
    scanf("%d%d", &n, &b);
    long int rez = putere(n, b);
    printf("%d la puterea %d este %li", n, b, rez);

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Scrieti o functie recursiva pentru ca verifica daca  o cifra apare intr-un numar.

#include <stdio.h>

int contine(int n, int cifra){

    if(n==0 && cifra==0){
        return 1;
    }
    if(n==0){
        return 0;
    }
    else if(cifra==n%10){
        return 1;
    }
    else
        return contine(n/10,cifra);
}
int main() {
    int nr, c;
    scanf("%d%d", &c, &nr);
    printf("%s", contine(nr,c)==1?"DA":"NU");
    
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Scrieti o functie recursiva care afiseaza transcrierea in binar (baza 2) a unui numar intreg primit ca parametru.


#include <stdio.h>

int ok=1;

void baza2(int n){

    int bazadoi=0;
    if(n==0 && ok){
        printf("0");
        return;
    }
    if(n!=0){
        ok=0;
        bazadoi=n%2;
        baza2(n/2);
        printf("%d",bazadoi);
    }

}int main() {
    int nr;
    scanf("%d", &nr);
    baza2(nr);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Scrieti o functie (de preferat, recursiva) care verifica daca un numar contine numai cifre pare.
//Functia returneaza 1, daca toate cifrele din nr primit ca parametru sunt pare, respectiv 0, daca numarul primit ca parametru contine cel putin o cifra impara.

//Scrieti un program in care verificati daca elementele de pe conturul unei matrice patratice contin numai cifre pare. Programul va parcurge pasii:

//- va citi dimensiunea matricii de la tastatura

//- va citi elementele matricii

//- va afisa matricea

//- va afisa o matrice care are conturul completat cu 0, respectiv 1, dupa cum elementele din matricea initiala au sau nu toate cifrele pare.
//Restul elementelor din matrice vor fi reprezentate cu spatii goale.

#include <stdio.h>
#include <stdbool.h>



int toate_pare(int n) {
    bool ok =true;

    while(n){
        if(n%10%2!=0){
            ok=false; break;
        }
        n/=10;
    }
    if(ok)
        return 1;
    else
        return 0;


}


int main(){

    int m[100][100], x;
    scanf("%d",&x);
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            scanf("%d",&m[i][j]);
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<x;j++){
            printf("%d ",m[i][j]);
            if(j==x-1){
                printf("\n");
            }
        }
    }
    for(int i=0;i<x;i++) {
        for (int j = 0; j < x; j++) {
            if(i == 0 || i == x - 1 || j == 0 || j == x-1)
                printf("%d ", toate_pare(m[i][j]));
            else
                printf("  ");

        }
        printf("\n");
    }

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Scrieti o functie care calculeaza produsul cifrelor din care este format un numar natural n, primit ca parametru. .
//De preferat, scrieti functia in maniera recursiva.
//Scrieti un program in care aplicati functia definita mai sus asupra elementelor de pe diagonala secundara a unei matrice patratice,
// ale carei dimensiuni, respectiv elemente, sunt citite de la tastatura.

#include <stdio.h>


int diagonalasecundara(int n){

    int uc=0, produs=1;
    while(n!=0){
        uc=n%10;
        n/=10;
        produs=produs*uc;

    }
    return produs;

}




int main() {

    int m[100][100], x;
    scanf("%d", &x);
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf("%d   ", m[i][j]);
            if (j == x - 1) {
                printf("\n");
            }
        }
    }
    printf("\n");
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            if(i+j==x-1){
                printf("%d ", diagonalasecundara(m[i][j]));
                }
            }

        }

    }
