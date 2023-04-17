//1.1 Scrieți un program care calculează produsul a n numere naturale, citite de la tastatura.

#include <stdio.h>
int main(){
    int a, n, produsul=1;
    printf("Introduceti cate cifre doriti sa cititi de la tastatura\n");
    scanf("%d",&n);
    if(n==0)
        printf("Rezultatul este 1");

    else{
        printf("Introduceti valorile dorite\n");
        for(int i=0;i<=n-1;i++){
            scanf("%d",&a);
            produsul*=a;

        }
        printf("Rezultatul este %d\n", produsul);
    }


}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Scrieți un program care afișează toate puterile mai mici decât p ale unui numar natural n dat (p și n citite de la utilizator).

#include <stdio.h>
#include <math.h>

int main() {

    int n, k, i = 0, p = 0;
    scanf("%d%d", &n, &k);
    for (i = 0; i <= n; i++) {
        if (i == 0)
            p = 1;
        else
            p = p * k;
        if (p > n)
            break;
        printf("%d la puterea %d este %d\n", k, i, p);
    }
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Scrieti un program care afiseaza toti divizorii naturali proprii ai unui numar natural n citit de la tastatura.
// Programul afiseaza la sfarsit pe cel mai mare si cel mai mic divizor propriu.

#include <stdio.h>

int main() {


    int n, i, prim = 0, mare = 1, mic;
    scanf("%d", &n);
    for (i = 2; i <= n / 2; i++) {
        if (n == 0 || n == 1) {
            prim = 1;
            break;
        }
        if (n % i == 0) {
            prim = 1;
            if (mare == 1)mic = i;
            printf("%d este divizor al lui %d\n", i, n);
            mare = i;
        }
    }
    if (prim == 0)
        printf("Numarul nu are divizori proprii (este prim)");
    else
        printf("Cel mai mic este %d si cel mai mare este %d", mic, mare);

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Scrieți un program care calculează numărul de cifre divizibile cu 3 din care este format numărul natural n, citit de la tastatură.

#include <stdio.h>

int main() {

    int n, cifre = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if ((n % 10) % 3 == 0) {
            cifre++;
        }
        n = n / 10;
    }
    printf("Numarul contine %d cifre divizibile cu 3.", cifre);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Scrieti un program care citeste de la tastatura numere naturale pana la intalnirea lui 0.
// Determinati care dintre numerele citite sunt perfecte. Un numar este perfect daca este egal cu suma divizorilor sai pozitivi mai mici decat el.

#include <stdio.h>

int main() {

    int v[100], n, count = 0, i;
    scanf("%d", &n);
    while (1) {
        int s = 0;
        scanf("%d", &n);
        if (n == 0) break;
        for (i = 1; i <= n / 2; i++) {
            if (n % i == 0) s += i;
        }
        if (s == n) {
            v[count] = s;
            count++;
        }
    }
    for (i = 0; i < count; i++) {
        printf("%d este numar perfect \n", v[i]);
    }
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.6 Calculaţi cifra de control a unui număr întreg efectuând suma cifrelor sale, apoi suma cifrelor acestei sume etc.
// Până se obţine o sumă formată dintr-o singură cifră.

#include <stdio.h>

int main() {

    int n, uc, suma = 0;
    scanf("%d", &n);
    while (n != 0) {
        uc = n % 10;
        suma += uc;
        n /= 10;
    }

    if (suma > 10) {
        int s = 0;
        while (suma != 0) {
            uc = suma % 10;
            s += uc;
            suma /= 10;
        }
        printf("Cifra de control este %d", s);
    }
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.7 Pentru o bază de numerație b dată, o cifra d și un număr n, să se calculeze de câte ori apare cifra d în exprimarea numarului n, scris în baza b.

#include <stdio.h>

int main() {
    
    int b, d, n, rest, count = 1, baza = 0, gasit = 0, v[100];
    scanf("%d", &b);
    scanf("%d", &n);
    scanf("%d", &d);
    int temp = n;
    while (temp != 0) {
        v[count++] = temp % b;
        temp /= b;
    }
    for (int j = count - 1; j > 0; j--) {
        baza = baza * 10 + v[j];
    }
    while (baza != 0) {
        rest = baza % 10;
        if (rest == d) gasit++;
        baza /= 10;
    }
    if (gasit) {
        printf("Numarul %d are %d cifre de %d, scris in baza %d.", n, gasit, d, b);
    } 
    else
        printf("Cifra %d nu este folosita la scrierea in baza %d.", d, b);
}
