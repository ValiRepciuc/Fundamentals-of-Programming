//Calcul de sume
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//1. Calculati suma 12 – 22 + 32 – ... ±n2. Prototip: int suma_puteri(int n);


#include <stdio.h>
#include <math.h>

int suma_puteri(int n){
    int suma=0;
    for(int i=1;i<=n;i++){
        double x=i;
        if(i%2==0)
           x=x*(-1);
        suma=suma+pow(x,2);
    }
    return suma;


}

int main(){

    int a;
    scanf("%d",&a);
    printf("%d", suma_puteri(a));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//2. Calculati suma tuturor numerelor mai mici ca n, divizibile cu 3. Prototip: int suma_mult3(int n);


#include <stdio.h>

int suma_mult3(int n) {

    int suma = 0;
    for (int i = 0; i < n; i++) {
        if (i % 3 == 0) {
            suma+=i;
        }
    }
    return suma;
}
int main(){

    int a;
    scanf("%d",&a);
    printf("%d", suma_mult3(a));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//3. Calculati suma 1/2 + 2/3 + ... + n/(n +1). Prototip: float suma_rapoarte(int n);


#include <stdio.h>

float suma_rapoarte(int n){

    float suma=0;
    for(float i=0;i<n;i++)
        suma+=i/(i+1);
    return suma;
}


int main(){

    int a;
    scanf("%d",&a);
    printf("%f", suma_rapoarte(a));

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//Cifrele unui numar intreg


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1. Calculati suma cifrelor unui numar intreg. Prototip: int cifre(long n);


#include <stdio.h>

int cifre(long n){

    int uc=0;
    int suma=0;
    while(n!=0) {
        uc = n % 10;
        n /= 10;
        suma += uc;
    }
    return suma;
}

int main(){

    long a;
    scanf("%ld",&a);
    printf("%d",cifre(a));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//2. Calculati numarul de aparitii ale unei cifre intr-un numar intreg. Prototip: int aparitii(long n, int c);


#include <stdio.h>

int aparitii(long n, int c) {

    int contor = 0;
    int uc = 0;
    while (n != 0) {

        uc = n % 10;
        if (uc == c)
            contor++;
        n /= 10;
    }
    return contor;
}

int main() {

    long a;
    int b;
    scanf("%ld", &a);
    scanf("%d", &b);
    printf("%d", aparitii(a, b));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//3. Calculati cea mai mare cifra a unui numar intreg. Prototip: int cifra_max(long n);


#include <stdio.h>

int cifra_max(long n){

    int uc=0, max=0;
    while(n!=0){
        uc=n%10;
        n/=10;
        if(uc>max)
            max=uc;
    }
    return max;
}

int main(){

    long a;
    scanf("%ld", &a);
    printf("%d", cifra_max(a));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//4. Verificati daca un numar este palindrom (un numar este palindrom daca este egal cu rasturnatul sau, de exemplu,
// 23232 este un palindrom). Functia va returna 1 daca numarul este palindrom si 0 in caz contrar.
// Prototip: int palindrom(long n);


#include <stdio.h>

int palindrom(long n){

    int n1=n;
    int tmp=0;
    int uc=0;
    while(n!=0){
        uc=n%10;
        n/=10;
        tmp=tmp*10+uc;
    }
    if(tmp==n1)
        return 1;
    else
        return 0;
}

int main(){

    long a;
    scanf("%ld", &a);
    printf("%s",(palindrom(a)?"Este palindrom":"Nu este palindrom"));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//Divizorii unui numar intreg


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1. Afisati divizorii naturali ai unui numar intreg. Prototip: void print_divizori(int n);


#include <stdio.h>

void print_divizori(int n){

    for(int i=1;i<=n;i++)
        if(n%i==0)
            printf("%d ",i);
}

int main(){

    int a;
    scanf("%d",&a);
    printf("Divizorii naturali ai numarului %d sunt:",a);
    print_divizori(a);

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//2. Verificati daca un numar natural este perfect (un numar natural este perfect daca suma divizorilor naturali este
// egala cu de doua ori numarul, de exemplu, 6 este un numar perfect, deoarece 1 + 2 + 3 + 6 = 2*6). Functia va returna
// 1 daca numarul este perfect si 0 in caz contrar. Prototip: int perfect(long n);


#include <stdio.h>

int perfect(long n){
    int suma=0;
    for(int i=1;i<=n;i++)
        if(n%i==0)
            suma+=i;
    if(suma==n*2)
        return 1;
    else
        return 0;
}

int main(){

    long a;
    scanf("%ld",&a);
    printf("Numarul %ld %s",a,(perfect(a)?"este numar perfect!":"nu este numar perfect!"));


}
 
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//3. Verificati daca un numar natural este prim (un numar natural este prim daca are exact doi divizori).
// Functia va returna 1 daca numarul este prim si 0 in caz contrar. Prototip: int prim(long n);


#include <stdio.h>

int prim(long n) {
    int contorprim = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0)
            contorprim++;
    }
    if (contorprim == 2)
        return 1;
    else
        return 0;
}

int main(){

    long a;
    scanf("%ld",&a);
    printf("Numarul %ld %s",a,(prim(a)?"este prim!":"nu este prim!"));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//4. Calculati ordinul de multiplicitate al unui numar prim k intr-un numar intreg n
// (ordinul de multiplicitate al lui k in n este egal cu puterea la care apare k in descompunerea in factori primi
// a lui n). Prototip: int ordin_mult(int n, int k);

#include <stdio.h>

ordin_mult(int n, int k){


}

int main(){

    int a, b;
    scanf("%d%d",&a,&b);
}
 

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//Calculati cel mai mare divizor comun a doua numere intregi. Prototip: int cmmdc(int a, int b);


#include <stdio.h>
int cmmdc ( int a, int b) {
    if(a==0) return b;
    return cmmdc(b%a, a);
}
int main(){
    int a, b;
    scanf("%d%d",&a,&b);
    printf("Cmmdc al numerelor introduse este %d", cmmdc(a,b));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//Vectori


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1. Afisati elementele pozitive dintr-un vector de dimensiune n. Prototip: void print_pozitive(int v[], int n);


#include <stdio.h>

void print_pozitive(int v[],int n){
    printf("Numere pozitive gasite in vector sunt: ");
    for(int i=0;i<n;i++){
        if(v[i]>0)
            printf("%d ",v[i]);
    }

}

int main(){

    int v[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d", &v[i]);
    }
    print_pozitive(v,n);
}
 

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//2. Afisati pozitiile dintr-un vector de dimensiune n pe care se gasesc numere pozitive.
// Prototip: void print_poz_pozitive(int v[], int n);


#include <stdio.h>

void print_poz_pozitive(int v[],int n){
    printf("Numere pozitive gasite in vector se gasesc pe pozitiile: ");
    for(int i=1;i<=n;i++){
        if(v[i]>0)
            printf("%d ",i);
    }

}

int main(){

    int v[100];
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &v[i]);
    }
    print_poz_pozitive(v,n);
}
 

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//3. Afisati elementele de pe pozitii impare dintr-un vector de dimensiune n.
// Prototip: void print_poz_impare(int v[], int n)


#include <stdio.h>

void print_poz_impare(int v[],int n){
    printf("Numere pozitive gasite in vector se gasesc pe pozitiile: ");
    for(int i=1;i<=n;i++){
        if(v[i]>0 && i%2==1)
            printf("%d ",i);
    }

}

int main(){

    int v[100];
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++) {
        scanf("%d", &v[i]);
    }
    print_poz_impare(v,n);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//4. Afisati elementele unui vector de dimensiune n in ordine inversa.
// Prototip: void print_reverse(int v[], int n);


#include <stdio.h>

void print_reverse(int v[],int n){
    printf("Elementele inversate in vector sunt: ");
    for(int i=n-1;i>=0;i--){
        printf("%d ",v[i]);

    }

}

int main(){

    int v[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++) {
        scanf("%d", &v[i]);
    }
    print_reverse(v,n);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//5. Verificati daca elementele unui vector de dimensiune n formeaza o progresie aritmetica.
// Prototip: int progresie_aritm(float v[], int n);

#include <stdio.h>

int progresie_aritm(float v[],int n){

    int r=0;
    int contor=0;
    r=v[1]-v[0];
    for(int i=1;i<n;i++){
        if(v[i]==v[i-1]+r){
            contor++;
        }
    }
    if(contor==n-1){
        return 1;
    }
    else
        return 0;
}
int main(){
    float v[100];
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        scanf("%f",&v[i]);
    }
    printf("Sirul %s",  (progresie_aritm(v,n)?"este progresie aritmetica":"nu este progresie aritmetica"));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//6. Verificati daca elementele unui vector de dimensiune n formeaza o progresie geometrica.
// Prototip: int progresie_geom(float v[], int n);


#include <stdio.h>
#include <math.h>

int progresie_geom(float v[], int n){

    double q=v[1]/v[0];
    int contor=0;
    for(int i=2;i<n;i++){
        double y=i-1;
        if(v[i]==v[i-1]*(pow(q,y)));
        contor ++;
    }
    if(contor==n-2)
        return 1;
    else
        return 0;
}

int main(){

    int n; scanf("%d",&n);
    float v[n];
    for(int i=0;i<n;i++){
        scanf("%f",&v[i]);
    }
    printf("Sirul %s", (progresie_geom(v,n)?"este progresie geometrica!":"nu este progresie geometrica!"));
}
 
~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//7. Calculati produsul scalar al doi vectori de dimensiune n.
// Prototip: float produs_scalar(float v[], float u[], int n);


#include <stdio.h>

float produs_scalar(float v[], float u[], int n){

    int produs=0;
    for(int i=0;i<n;i++){
        produs+=v[i]*u[i];
    }
    return produs;
}

int main(){

    int n; scanf("%d",&n);
    float v[n],u[n];
    for(int i=0;i<n;i++){
        scanf("%f",&v[i]);
    }
    for(int i=0;i<n;i++){
        scanf("%f",&u[i]);
    }
    printf("Produsul scalar a sirurilor v si u este : %f", produs_scalar(v,u,n));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//8. Calculati media aritmetica a elementelor nenule dintr-un vector de dimensiune n.
// Prototip: float media_aritmetica(int v[], int n);


#include <stdio.h>

float medie( int v[ ], int n){
    double ma=0;
    for(int i=0;i<n;i++){
        ma+=v[i];
    }
    ma=ma/n;
    return ma;

}

int main(){

    int a;
    scanf("%d",&a);
    int v[a];
    for(int i=0;i<a;i++){
        scanf("%d",&v[i]);
    }
    printf("Media aritmetica a sirului este: %f", medie(v,a));

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//9. Calculati numarul de aparitii ale valorii maxime dintr-un vector de dimensiune n.
// Prototip: int aparitii_maxim(int v[], int n);


#include <stdio.h>

int max(int v[], int n) {

    double maxim = v[0];
    for (int i = 1; i < n; i++) {
        if (maxim < v[i])
            maxim = v[i];
    }
    int contormaxim = 0;
    for (int i = 0; i < n; i++) {
        if (maxim == v[i])
            contormaxim++;
    }
    return contormaxim;
}

int main() {

    int a;
    scanf("%d", &a);
    int v[a];
    for (int i = 0; i < a; i++) {
        scanf("%d", &v[i]);
    }
    int aparitii = max(v, a);
    if(aparitii==1)
        printf("Cel mai mare numar in sir apare o singura data.");
    else
        printf("Cel mai mare numar din sir apare de %d ori",aparitii);
}
 

~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//10. Afisati ultima pozitie pe care se gaseste un element intr-un vector de dimensiune n.
// Prototip: int cauta_ultim(float v[], int n, float x);


#include <stdio.h>

int cauta_ultim(float v[],int n, float x){

    int loc=0;
    for(int i=0;i<n;i++){
        if(v[i]==x)
            loc=i;
    }
    return loc;
}

int main(){

    int n;
    printf("Introduceti lungimea sirului:"); scanf(" %d",&n);
    float v[n];
    printf("Introduceti valorile din sir:");
    for(int i=0;i<n;i++){
        scanf(" %f",&v[i]);
    }
    float x;
    printf("Introduceti numarul pe care doriti sa il cautati:");scanf(" %f",&x);
    int pozitie= cauta_ultim(v,n,x);
    printf("\n");
    if(pozitie==0){
        printf("Elementul cautat se gaseste doar pe prima pozitie in sir.");
    }
    else
        printf("Ultima pozitie pe care se afla numarul cautat este a %d-a pozitie.",pozitie);

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//Siruri de caractere


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1. Afisati toate pozitiile pe care se gaseste un caracter intr-un sir de caractere.
// Prototip: void print_poz(char s[], char c);


#include <stdio.h>

void print_poz(char s[],char c){

    for(int i=0;s[i];i++)
        if(s[i]==c)
            printf("%d ",i);
}

int main(){
    char v[100],p;
    printf("Introduceti sirul de caractere:");
    scanf(" %[^\n]s",v);
    printf("Introduceti caracterul pe care doriti sa il cautati: ");
    scanf(" %c",&p);
    char x;
    scanf("%c",&x);
    printf("\n");
    printf("Caracterul cautat se gaseste pe pozitiile: ");
    print_poz(v,p);

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//2. Numarati cate vocale contine un sir de caractere. Prototip: int numar_vocale(char s[]);

#include <stdio.h>
#include <string.h>


void numar_vocale(char v[]) {
    int total=0;
    for (int i = 0; v[i]; i++) {
        if (strchr("aeiou", v[i]))
            total++;
    }
    printf("%d",total);
}

int main(){

    char s[100];
    printf("Introduceti sirul:");
    scanf("%[^\n]s",s);
    printf("Vocale gasite in sir: ");
    numar_vocale(s);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//3. Numarati cate litere contine un sir de caractere. Prototip: int numar_litere(char s[]);

#include <stdio.h>

void numar_litere(char s[]) {
    int caractere=0;
    for(int i=0;s[i];i++)
        caractere++;
    printf("In sirul introdus se gasesc %d caractere!",caractere);
}
int main(){

    char v[100];
    printf("Introduceti sirul de caracter:");
    scanf("%[^\n]s",v);
    numar_litere(v);
}
