//1.1 Scrieti un program care citeste o secventa de numere naturale (pana la aparitia numarului 0) si calculeaza cel mai mare divizor comun al lor.

#include <stdio.h>

int cmmdc ( int a, int b) {
    if(a==0) return b;
    return cmmdc(b%a, a);
}
int main() {
    int n, v[100], count = 0;
    do {
        scanf("%d", &n);
        v[count] = n;
        count++;
    } while (n != 0);
    int rezultat = v[0];
    for (int i = 0; i < count; i++) {
        rezultat = cmmdc(v[i], rezultat);
    }
    printf("Cmmdc al numerelor introduse este %d", rezultat);
}



~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Scrieti un program care afiseaza tabla inmultirii pana la un numar n (citit de la tastatura).

#include <stdio.h>
int main() {
    int n, x = 0;
    scanf("%d", &n);
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            x = i * j;
            printf("%dx%d=%d  ", i, j, x);
            if (j == n)
                printf("\n");
        }
    }
}
