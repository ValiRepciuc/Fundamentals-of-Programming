//1.1 Să se scrie o funcţie,  intr-un program, care primeşte ca parametri un caracter şi un şir de caractere şi 
//returnează pozitia pe care se găseşte prima apariţie  a caracterului în şir.

#include <stdio.h>

int gasire_cifra(char v[],char x){

    for(int i=0;v[i];i++)
        if(v[i]==x)
            return i;
    return 0;
}

int main(){
    char v[100],p;
    scanf("%[^\n]s",v);
    scanf("%c",&p);
    char x;
    scanf("%c",&x);
    int rezultat= gasire_cifra(v,x);
    if(rezultat !=0){
        printf("Caracterul %c se afla pe pozitia %d in sirul: %s.",x, gasire_cifra(v,x),v);
    }
    else
        printf("Caracterul %c nu se afla in sirul: %s.",x,v);

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Scrieţi un program care calculează şi afişează statistici despre un şir de caractere citit de la tastatură:
// numărul total de caractere, numărul de litere, numărul de cifre.

#include <stdio.h>

void statistica(char v[]) {

    int caractere = 0, litere = 0, cifre = 0;
    for (int i = 0; v[i]; i++) {
        caractere = i;
        if ((v[i] >= 'A' && v[i] <= 'Z') || (v[i] >= 'a' && v[i] <= 'z')) {
            litere++;
        }
        if (v[i] >= '0' && v[i] <='9') {
            cifre++;
        }

    }
    caractere++;
    printf("Sirul: %s are %d caractere %d litere %d cifre",v, caractere, litere, cifre);
}
int main(){

    char v[100];
    scanf("%[^\n]s",v);
    statistica(v);


}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Scrieţi  o funcţie, intr-un program, care primeşte ca parametri un şir de caractere şi un caracter şi returnează numărul de apariţii ale caracterului în şir.

#include <stdio.h>

int totalaparitii(char v[], char x){

    int contor=0;
    for(int i=0;v[i];i++)
        if(x==v[i])
            contor++;
    return contor;
}

int main(){

    char v[100];
    scanf("%[^\n]p", v);
    char p;
    scanf("%c",&p);
    char x;
    scanf("%c",&x);
    printf("Caracterul %c apare de  %d ori in sirul: %s.",x, totalaparitii(v,x),v);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Scrieţi  o funcţie, intr-un program,  care primeşte ca parametri un şir de caractere şi doua caractere inlocuieste 
// toate aparitiile primului caracter in sir cu cel de al doilea.

#include <stdio.h>

void interschimbare(char v[],char x, char y){

    for(int i=0;v[i];i++)
        if(x==v[i])
            v[i]=y;
    printf("%s",v);
}

int main(){

    char v[100];
    scanf("%[^\n]s",v);
    char p;
    scanf("%c",&p);
    char x;
    scanf("%c",&x);
    char p1;
    scanf("%c", &p1);
    char y;
    scanf("%c",&y);
    interschimbare(v,x,y);

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Scrieţi o funcţie, intr-un program,  care testează dacă un şir de caractere primit ca parametru este palindrom. 
// Funcţia va returna 1 dacă şirul este palindrom şi 0 altfel.

#include <stdio.h>
#include <string.h>

int palindrom(char v[]){

    int r=strlen(v);
    for(int i=0;i<r;i++){
        if(v[i]!=v[r-1-i])
            return 0;
    }
    return 1;

}

int main(){

    char v[100];
    scanf("%[^\n]s",v);
    printf("%s %s",v, palindrom(v)?"este palindrom":"nu este palindrom");
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.6 Scrieţi un program C care pornind de la un şir citit de la tastatură, construieşte şi afişează şirul care conţine
// cifrele din cel iniţial, gestionat ca valoare numerica, long int.

#include <stdio.h>
#include <string.h>

long int cifre(char v[]){

    int tmp[255];
    int contor=0;
    for(int i=0;v[i];i++) {
        if (v[i] >= '0' && v[i] <= '9') {
            char z = v[i];
            int r = z - '0';
            tmp[contor] = r;
            contor++;
        }
    }
    long int aux=0;
    for(int i=0;i<contor;i++){
        aux=aux*10+tmp[i];
    }
    return aux;
}


int main(){

    char v[100];
    scanf("%[^\n]s",v);
    printf("%li", cifre(v));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.7 Scrieţi un program C care pornind de la un şir citit de la tastatură, construieşte şi afişează şirul care 
// conţine majusculele literelor din cel iniţial, fara a utiliza functia de biblioteca strupr.

#include <stdio.h>
#include <string.h>


void majuscule(char v[]){

    for(int i=0;v[i];i++) {
        if (v[i] >= 'a' && v[i] <= 'z') {
            v[i]-=32;
        }
    }
}


int main(){

    char v[100];
    scanf("%[^\n]s",v);
    majuscule(v);
    printf("%s",v);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.8 Scrieţi un program C care pornind de la un şir citit de la tastatură, construieşte şi afişează şirul care conţine minusculele vocalelor din cel iniţial;

#include <stdio.h>
#include <string.h>


void minuscule(char v[]) {

    for (int i = 0; v[i]; i++) {
        if (strchr("aeiou", v[i]))
            printf("%c", v[i]);
    }
}

int main(){

    char v[100];
    scanf("%[^\n]s",v);
    minuscule(v);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.9 Scrieţi un program C care pornind de la un şir citit de la tastatură, construieşte şi afişează inversul sirului initial.

#include <stdio.h>
#include <string.h>

void oglindit(char v[]){

    int r=strlen(v);
    for(int i=r-1;i!=-1;i--){
            printf("%c",v[i]);
        }

}
int main(){

    char v[100];
    scanf("%[^\n]s",v);
    oglindit(v);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.10 Scrieţi un program C care pornind de la un şir citit de la tastatură, construieşte şi afişeaza subşirul care 
// conţine m caractere începând de la poziţia p din şirul iniţial; m şi p se citesc de la tastatura;

#include <stdio.h>
#include <string.h>

void extractie(char v[],int x,int y){
    for(int i=x-1;i<=x+y-1;i++){
        if((v[i] >= '0' && v[i] <= '9') || (v[i] >= 'a' && v[i] <= 'z') || v[i]>= ' ')
            printf("%c",v[i]);
    }

}
int main() {

    char v[200];
    scanf("%[^\n]s", v);
    int p,m;
    scanf("%d%d",&p,&m);
    extractie(v,p,m);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.11 Scrieţi un program C care pornind de la un şir citit de la tastatură, construieşte şi afişeaza subşirul care 
// conţine caracterele celui iniţial cu excepţia celor m începând de la poziţia p; m şi p se citesc de la tastatura;

#include <stdio.h>
#include <string.h>

void extractie(char v[],int x,int y){

    int r=strlen(v);
     for(int i=0;i<r;i++){
         if(i<x-1 || i>=x+y-1)
             printf("%c",v[i]);
     }
}
int main() {

    char v[200];
    scanf("%[^\n]s", v);
    int p,m;
    scanf("%d%d",&p,&m);
    extractie(v,p,m);
}

