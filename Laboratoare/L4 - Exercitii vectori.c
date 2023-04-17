//1.1 Scrieţi un program care citeşte de la tastatură doi vectori de numere (de aceeaşi dimensiune) şi calculează suma lor,
// termen cu termen, într-un al treilea vector. Programul afişează rezultatul obţinut.

#include <stdio.h>
int main() {
    int n, i, s = 0;
    scanf("%d", &n);
    int v[n], u[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &u[i]);
    }
    printf("Suma vectorilor:\n");
    for (i = 0; i < n; i++) {
        s = v[i] + u[i];
        printf("%d ", s);
    }
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Scrieţi un program care citeşte de la tastatură doi vectori de numere de aceeaşi dimensiune şi calculează produsul scalar al acestora.
// Produsul scalar reprezinta suma produselor element cu element (Ex. a=(2,3) si b=(4,5) axb=2*4+3*5=8+15=23 )

#include <stdio.h>

int main() {

    int n, i, ps = 0;
    scanf("%d", &n);
    int v[n], u[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
    }
    for (i = 0; i < n; i++) {
        scanf("%d", &u[i]);
    }
    printf("Produsul scalar al vectorilor = ");
    for (i = 0; i < n; i++) {
        ps = ps + v[i] * u[i];
    }
    printf("%d ", ps);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Introduceti de la tastatura o succesiune de n  numere intregi, stocate intr-un vector cu dimesniunea maxima de 50.
// Modificati fiecare element stocat prefixand fiecare valoare cu cifra 9. Astfel, daca v[i]=123 valoarea inlocuita va fi 9123.

#include <stdio.h>

int main() {

    int v[50], i, n;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        printf("%d,", v[i]);
    }
    printf("\n");
    for (i = 0; i < n; i++) {
        printf("9%d,", v[i]);
    }
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Introduceti de la tastatura o succesiune de n  numere intregi, stocate intr-un vector cu dimesniunea maxima de 50.
// Modificati valorile stocate conform urmatorului algoritm:

//a)primul si ultimul element raman neschimbate;
//b)elementul de pe pozitia i se calculeaza ca fiind [(vi-1 + vi +vi+1))/3], unde cu [v] am notat partea intreaga

#include <stdio.h>

int main() {

    int v[50], n, i, x = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        printf("%d,", v[i]);
    }
    printf("\n%d,", v[0]);
    for (i = 1; i < n - 1; i++) {
        x = (v[i - 1] + v[i] + v[i + 1]) / 3;
        printf("%d,", x);
    }
    printf("%d,", v[n - 1]);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Fie o matrice patratica de ordinul n, cu n maxim 100. Afisati suma elementelor de pe diagonala principala.

#include <stdio.h>

int main()
{
    int m[100][100], n, i, j, suma=0;
    scanf("%d",&n);
    for(i=0; i < n;i++){
        for(j=0 ; j < n; j++){
            scanf("%d",&m[i][j]);
            if(i==j)
                suma= suma + m[i][j];

        }
    }
    printf("%d",suma);


    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.6 Fie o matrice patratica de ordinul n. Determinati elementul maxim de pe fiecare linie,
// pe care il memorati intr-un tablou unidimensional, pe pozitia corespunzatoare liniei. La final afisati continutul acestuia.

#include <stdio.h>

int main() {

    int m[100][100], n, i, j, max;
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {

            scanf("%d", &m[i][j]);

        }
    }
    for (i = 0; i < 1; i++) {
        for (j = 0; j < n; j++) {

            max = m[0][0];
            if (max < m[i][j])
                max = m[i][j];
        }
        printf("%d", max);
    }
    for (i = 1; i < 2; i++) {
        for (j = 0; j < n; j++) {

            max = m[1][0];
            if (max < m[i][j])
                max = m[i][j];
        }
        printf(" %d", max);

    }
    for (i = 2; i < 3; i++) {
        for (j = 0; j < n; j++) {

            max = m[2][1];
            if (max < m[i][j])
                max = m[i][j];
        }
        printf(" %d", max);
    }
    if (n > 3) {
        for (i = 3; i < 4; i++) {
            for (j = 0; j < n; j++) {

                max = m[3][0];
                if (max < m[i][j])
                    max = m[i][j];
            }
            printf(" %d", max);
        }
    }
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.7 Fie o matrice patratica de ordinul n ale caror elemente sunt formate din 0 si 1.

//a)Generati elementele matricei, prin alternarea cifrelor de 0 si 1. Exemplu pentru o matrice de ordinul 3: Primul element este 0.
//b) Inlocuiti cifrele de 1 cu valoarea 2

#include <stdio.h>

int main() {

    int m[10][10], n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if ((i + j) % 2 == 1) {
                m[i][j] = 1;
                printf("%d ", m[i][j]);
            } else {
                m[i][j] = 0;
                printf("%d ", m[i][j]);
            }
            if (j == n - 1)
                printf("\n");
        }
    }
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.8 Scrieţi un program care citeşte de la tastatură un număr natural scris în baza 10 şi afişează reprezentarea acestuia în baza 2.
// Se va folosi  un vector pentru a stoca valorile din reprezentarea în baza 2 a numărului.

#include <stdio.h>

int main() {

    long long int n, uc = 0, x = 1;
    long long int bd = 0;
    scanf("%lld", &n);
    printf("Numarul %lld in baza 2 este ", n);
    do {
        uc = n % 2;
        n = n / 2;
        bd = bd + x * uc;
        x = x * 10;

    } while (n > 0);
    printf("%lld", bd);

    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.9 Scrieţi un program care citeşte de la tastatură un număr natural n scris în baza 10 şi un număr natural b, cu 2 ≤ b ≤ 10.
// Afişaţi reprezentarea lui n în baza b.

#include <stdio.h>

int main() {
    
    int n, b, x = 1, bd = 0;
    scanf("%d", &n);
    scanf("%d", &b);
    int uc = 0;
    do {
        uc = n % b;
        bd = bd + x * uc;
        n = n / b;
        x = x * 10;
    } while (n > 0);

    printf("%d", bd);
}
