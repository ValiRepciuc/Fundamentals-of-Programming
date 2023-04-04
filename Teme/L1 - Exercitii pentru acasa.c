//1.1 Pentru un numar intreg introdus de la tastatura determinati valoarea absoluta a acestuia.

#include <stdio.h>

int main() {
    
    int n, n2 = 0;
    scanf("%d", &n);
    if (n >= 0) {
        printf("Numarul introdus este pozitiv");
    } 
    else {
        n2 = (-1) * n;
        printf("Absolutul numarului %d este %d", n, n2);
    }
    return 0;
}



~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//1.2 Pentru un numar intreg introdus de la tastatura determinati daca acesta este par, impar sau 0.


#include <stdio.h>

int main() {
    
    int x;
    scanf("%d", &x);
    if (x % 2 == 0 && x != 0) {
        printf("Numarul %d este par.", x);
    }
    else if (x == 0) {
        printf("Numarul este 0.");
    } 
    else
        printf("Numarul %d este impar.", x);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

//1.3 Pentru un numar intreg pozitiv introdus de la tastatura verificati daca acesta este divizibil cu 3.


#include <stdio.h>

int main() {
    
    int x;
    scanf("%d", &x);
    if (x % 3 == 1 || x % 3 == 2) {
        printf("Numarul %d nu este divizibil cu 3", x);
    } 
    else {
        printf("Numarul %d este divizibil cu 3", x);
    }
    return 0;
}



~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Pentru doua  numare intregi pozitive introduse de la tastatura, a si d, verificati daca d este divizor pentru a.

#include <stdio.h>

int main() {
    
    int a, d;
    scanf("%d", &a);
    scanf("%d", &d);
    if (d == 0) {
        printf("Operatie imposibila");
    } 
    else if (a == 0) {
        printf("Numarul trebuie sa fie diferit de 0");
    } 
    else if (a % d == 0) {
        printf("%d este divizibil cu %d", a, d);
    }
    else {
        printf("%d nu este divizor pentru %d", d, a);
    }


    return 0;
}
