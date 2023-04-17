//1.1 Scrieti un program care citeste de la tastatura un numar intreg n si verifica daca este par.

#include <stdio.h>

int main() {

    int x;
    scanf("%d", &x);
    if (x % 2 == 0) {
        printf("%d este par", x);
    }
    else {
        printf("%d este impar", x);
    }
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Folosind instrucţiunea if, scrieţi un program care citeşte un număr intre 1 si 7 şi afişează ziua
// din săptămână corespunzătoare.

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    if (n==1) printf("Luni");
    else if (n==2) printf("Marti");
    else if (n==3) printf("Miercuri");
    else if (n==4) printf("Joi");
    else if (n==5) printf("Vineri");
    else if (n==6) printf("Sambata");
    else if (n==7) printf("Duminica");
    else printf("Numarul trebuie sa fie cuprins intre 1 si 7");

    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 In Codul Numeric Personal, prima cifra ofera informatii generale despre sexul si originea persoanei
// respective, astfel
//cifrele 1,3,5 sunt cetateni romani de sex masculin
//cifrele 2,4,6 sunt cetateni romani de sex feminin
//cifrele 7 sunt cetateni straini de sex masculin
//cifrele 8 sunt cetateni straini de sex feminin
//Folosind instrucţiunea if sau  switch, scrieţi un program care citeşte un număr intreg şi afişează sexul
// si originea persoanei, sau mesajul "Valoare invalida" pentru alte numere.

#include <stdio.h>

int main(){

    int x;
    scanf("%d", &x);
    if(x==1||x==3||x==5)
        printf("Cetatean roman de sex masculin");

    if(x==2||x==4||x==6)
        printf("Cetatean roman de sex feminin");

    if(x==7)
        printf("Cetatean strain de sex masculin");

    if(x==8)
        printf("Cetatean strain de sex feminin");

    else if (x>=9)

        printf("Valoare invalida");

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Folosind instructiuni repetitive, afisati toate numerele naturale pare de la 1 la n separate prin spatii,
// pentru n citit de la tastatura.

#include <stdio.h>

int main(){

    int x, n=1, pas=1;
    scanf("%d", &x);
    while(n<=x){
        if(n%2==0){
            printf("%d ", n);
        }
        n=n+pas;
    }
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Sa se afiseze toate numerele naturale de doua cifre care au cifra zecilor cuprinsa intre a si b,
// iar cifra unitatilor mai mica sau egala cu un c (a, b, c - numere citite de la tastatura).

#include <stdio.h>

int main(){

    int j, i, a, b, c;
    scanf("%d%d%d",&a,&b,&c);
    for(j=a; j<=b;j++){
        for(i=0;i<=c;i++){
            if(j==0)
                printf("%d",i);
            else
                printf("%d%d",j,i);
            if(i!=c)
                printf(" ");
            else
                printf("\n");
        }
    }
    return 0;
}

