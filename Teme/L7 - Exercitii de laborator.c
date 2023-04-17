//1.1 Scrieti o functie care calculeaza cea mai mare putere a lui 2, mai mica sau egala cu un numar n, primit ca parametru in functie.

#include <stdio.h>

int cea_mai_mare_putere(int n){
    int contor=0, a=1;
    while(a*2<=n){
        a=a*2;
        contor++;
    }
    return contor;

}

int main() {
    int n;
    scanf("%d", &n);
    printf("Cea mai mare putere a lui 2 mai mica decat %d este %d", n, cea_mai_mare_putere(n));
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Scrieti o functie care returneaza cifra care apare cel mai des in cadrul unui numar natural n, primit ca parametru. 
//Daca exista mai multe cifre cu acelasi (cel mai mare) numar de aparitii, functia o va returna pe cea mai mare dintre ele. 

#include <stdio.h>

int cifraCeaMaiIntalnita(int n)
{
    int maxx=0,k;
    int v[10]={0};
    while(n!=0)
    {
        v[n%10]++;
        if(n%10>maxx)maxx=n%10;
        n/=10;
    }
    int vmax=0;
    for(int i=0;i<10;i++)
    {
        if(vmax<v[i]){
            vmax=v[i];
            k=i;
        }
    }
    if(vmax<2)
        return maxx;
    else
        return k;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Cea mai intalnita cifra din %d este %d", n, cifraCeaMaiIntalnita(n));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Scrieţi o funcţie care verifica dacă un număr întreg n conţine cifra c. Numerele n şi c vor fi date ca parametri. 
//Functia va returna numarul de aparitii ale cifrei in numar, sau 0, in cazul in care cifra nu apare in numar.

#include <stdio.h>

int contine(int n, int c) {

    int uc = 0, contor = 0;
    while (n != 0) {
        uc = n % 10;
        n /= 10;
        if (uc == c) {
            contor++;
        }
    }
    if (contor > 0)
        return 1;
    else
        return 0;

}

int main() {
    int n, d;
    scanf("%d%d", &n, &d);
    printf("Numarul %d contine cifra %d: %s", n, d,
           (contine(n, d) == 0) ? "NU" : "DA");
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Scrieţi o funcţie care să verifice dacă un număr întreg este prim sau nu. Funcţia va returna valoarea 1 dacă argumentul este număr prim şi 0 în caz contrar.

#include <stdio.h>

int verifica_prim(int n) {
    int contor = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            contor++;
        }
    }
    if (contor == 2) {
        return 1;
    } else
        return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("%d este prim? %s", n, (verifica_prim(n) == 1) ? "DA" : "NU");
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Scrieţi o funcţie care calculeaza numărul de cifre ale unui număr întreg nenul dat ca parametru.

#include <stdio.h>

int nr_cifre(int n) {

    int contor = 0;
    while (n != 0) {
        n /= 10;
        contor++;
    }
    return contor;
}

int main() {
    int x;
    scanf("%d", &x);
    printf("Numarul %d are %d cifre.", x, nr_cifre(x));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.6 Scrieti o functie care calculeaza ordinul de multiplicitate al unui numar d intr-un intreg n. 
//Ordinul de multiplicitate al lui d in n este egal cu puterea la care apare d in descompunerea in factori primi a lui n).

#include <stdio.h>

int ordin_mult(int n, int d) {
    int k = 0;
    while (n >= d && n % d == 0) {
        k++;
        n = n / d;
    }
    return k;
}

int main() {
    int n, d;
    scanf("%d%d", &n, &d);
    printf("Ordinul de multiplicitate al lui %d in %d este %d", d, n, ordin_mult(n, d));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.7 Scrieti o functie care calculeaza produsul cifrelor pare dintr-un numar n intreg, citit de la tastatura. Prototip:

#include <stdio.h>

int produs_cifre_pare(int n) {

    int produs = 1, uc = 0;
    while (n != 0) {
        uc = n % 10;
        if (uc % 2 == 0) {
            produs = produs * uc;
        }
        n /= 10;
    }
    if (produs > 1) {
        return produs;
    } else
        return 0;
}

int main() {
    int n;
    scanf("%d", &n);
    printf("Produsul cifrelor pare din %d este %d", n, produs_cifre_pare(n));

}
