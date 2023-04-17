//1.1Scrieti un program care citeste de la tastatura un numar intreg n si verifica daca este par.

#include <stdio.h>
int main(){

    int x;
    printf("Introduceti numarul dorit\n");
    scanf("%d", &x);
    if(x%2==0){
        printf("%d este par\n", x);
    }
    else {
        printf("%d este impa\n", x);
    }
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Să se calculeze suma cifrelor unui număr întreg n, citit de la tastatură.

#include <stdio.h>

int main(){
    
    int x, uc=0, suma=0;
    printf("Introduceti numarul dorit\n");
    scanf("%d", &x);
    while(x!=0){
        if(x<0){
            x=x*(-1);
        }
        uc=x%10;
        x=x/10;
        suma= suma + uc;
    }
    printf("\nSuma cifrelor este %d", suma);
    return 0;
}
