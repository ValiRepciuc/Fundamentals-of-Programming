//1.1  Fie o matrice patratica de ordinul n, cu n maxim 100. Afisati suma elementelor de pe diagonala principala.

#include <stdio.h>

int main() {
    int n, m[100][100], suma = 0;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
            if (i == j) {
                suma = suma + m[i][j];
            }
        }
    }
    printf("%d", suma);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Fie o matrice patratica de ordinul n. Determinati elementul maxim de pe fiecare linie,
// pe care il memorati intr-un tablou unidimensional, pe pozitia corespunzatoare liniei. La final afisati continutul acestuia.

#include <stdio.h>

int main() {

    int n;
    scanf("%d", &n);
    int m[n][n], max[n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &m[i][j]);
        }
    }
    for (int i = 0; i < n; i++) {
        max[i] = m[i][0];
        for (int j = 0; j < n; j++) {
            if (max[i] < m[i][j])
                max[i] = m[i][j];


        }
    }

    for (int i = 0; i < n; i++)
        printf("%d ", max[i]);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Fie o matrice patratica de ordinul n ale caror elemente sunt formate din 0 si 1.
//a) Generati elementele matricei, prin alternarea cifrelor de 0 si 1. Exemplu pentru o matrice de ordinul 3: Primul element este 0.
//b) Inlocuiti cifrele de 1 cu valoarea 2

#include <stdio.h>

int main() {

    int m[10][10],n;
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        for(int j=0;j<n;j++){
            if((i+j)%2==1) {
                m[i][j] = 1;
                printf("%d ", m[i][j]);
            }
            else{
                m[i][j]=0;
                printf("%d ", m[i][j]);
            }
            if(j==n-1)
                printf("\n");
        }
    }
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Scrieţi un program care citeşte de la tastatură un număr natural scris în baza 10 şi
// afişează reprezentarea acestuia în baza 2. Se va folosi  un vector pentru a stoca valorile din reprezentarea în baza 2 a numărului.

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


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Scrieţi un program care citeşte de la tastatură un număr natural n scris în baza 10 şi un număr natural b, cu 2 ≤ b ≤ 10.
// Afişaţi reprezentarea lui n în baza b.

#include <stdio.h>

int main() {
    int n,b;
    scanf("%d",&n);
    scanf("%d",&b);

    long long int raspuns=0, p=1;
    while(n>0){
        int restCurent = n%b;
        raspuns+=p*restCurent;
        p=p*10;
        n=n/b;
    }
    printf("%lld",raspuns);

    return 0;
}


