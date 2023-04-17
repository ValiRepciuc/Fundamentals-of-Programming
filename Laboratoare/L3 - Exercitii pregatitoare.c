//1.1 Scrieti un program C care calculeaza suma S = 1 + 2 + ... + n, pentru un numar natural
// n citit de la tastatura, Folositi instructiunea for.

#include <stdio.h>

int main() {

    int n, s = 0, i;
    printf("Introduceti numarul dorit\n");
    scanf("%d", &n);
    for (i = 0; i <= n; i++) {
        s = s + i;
    }
    printf("Suma este %i", s);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Scrieti un program care calculeaza valoarea n!, pentru n numar natural, citit de la tastatura.

#include <stdio.h>

int main() {

    int n, factorial = 1, aux = 0;
    printf("Introduceti numarul dorit\n");
    scanf("%d", &n);
    aux = n;
    if (n == 0) {
        factorial = 1;
        printf("Factorialul lui %d este %d.", n, factorial);
    }
    while (n != 0) {
        factorial = factorial * n;
        n -= 1;

    }

    printf("Factorialul lui %d este %d.", aux, factorial);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Scrieti un program C care calculeaza valoarea sumei S = 1 - 2 + 3 - ... ± n, pentru un n citit de la tastatura.

#include<stdio.h>
int main()
{
    int n, i, s=0;
    scanf("%d", &n);
    for(i=1;i<=n;++i) {
        if(i%2==1) {
            s=s+i;
        }
        else {
            s=s-i;
        }
    }
    printf("Rezultatul este %d", s);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Scrieți un program care citește numere naturale până la întalnirea lui zero și numără câte dintre numerele
// citite sunt pare.

#include<stdio.h>

int main() {

    int i, n = 0;
    scanf("%d", &i);
    while (i != 0) {
        if (i % 2 == 0)
            n = n + 1;
        scanf("%d", &i);
    }
    printf("Am gasit %i numere pare", n);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Scrieti un program care citeste un numar intreg de la tastatura si verifica daca acesta este prim sau nu.

#include <stdio.h>

int main() {

    int x, divizor = 0, pas = 1;
    scanf("%d", &x);
    if (x == 2) {
        printf("Numarul este prim.");
    }
    else if (x < 2) {
        printf("Numarul nu este prim");
    }
    else if (x % 2 == 0) {
        printf("Numarul este compus.");
    }
    for (int i = 1; i <= x; i++) {
        if (x % i == 0) {
            divizor += pas;

        }
    }
    if (divizor == 2) {
        printf("Numarul este prim.");
    }
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.6 Scrieti un program care calculeaza suma divizorilor unui numar natural n.

#include <stdio.h>

int main() {

    int n, s = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            s += i;
        }
    }
    printf("Suma divizorilor lui %d este %d.", n, s);

}
