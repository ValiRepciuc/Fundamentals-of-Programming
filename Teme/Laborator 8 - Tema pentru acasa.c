//1.1 Se dă un şir de numere reale. Scrieti cate o functie care adreseaza fiecare din situatiile de mai jos.
//In final, scrieti un program C care sa demonstreze cum se utilizeaza aceste functii.
//a) Să verifice dacă şirul este o progresie aritmetică (diferenţa dintre oricare două numere alăturate este aceeaşi, de exemplu: 1,4,7,10,13).
//b) Sa verifice daca sirul contine doar numere in ordine crescatoare.
//c) Sa verifice daca sirul contine doar numere in ordine descrescatoare.

#include <stdio.h>

int progresie(int v[],int n){

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


int crescator(int v[],int n){

    int contor =0;
    int x;
    for(int i=1;i<n;i++){
        x=v[i-1];
        if(x<v[i])
            contor++;
    }
    if(contor==n-1)
        return 1;
    else
        return 0;

}
int descrescator(int v[],int n){


    int contor=0;
    int x;
    for(int i=1;i<n;i++){
        x=v[i-1];
        if(x>v[i])
            contor++;
    }
    if(contor==n-1)
        return 1;
    else
        return 0;

}

int main(){
    int n; scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    printf("Sirul este:\n");
    printf("- Progresie aritmetica: %s\n- Crescator: %s\n- Descrescator: %s",(progresie(v,n)?"DA":"NU"), (crescator(v,n)?"DA":"NU"), (descrescator(v,n)?"DA":"NU"));

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Sa se scrie o functie care primeste ca parametri un vector si dimensiunea acestuia (un intreg n) si numara cate numere pare contine acest vector. 

#include <stdio.h>


int nr_pare(int v[], int dim){
    int contor = 0;
    for (int i = 0; i < dim; i++) {
        if (v[i] % 2 == 0)
            contor++;
    }
    return contor;
}

int main() {
    int v[] = {43, 45, 6, 7, 76, 8, 9, 89, 98};
    printf("Vectorul contine %d elemente pare", nr_pare(v, 9));

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Sa se scrie o functie care primeste ca parametri un vector si dimensiunea acestuia (un intreg n) si afla maximul din acest vector.

#include <stdio.h>


double max(double v[], int dim){

    double maxim=v[0];
    for(int i=1;i<dim;i++){
        if(maxim<v[i])
            maxim=v[i];
    }
    return maxim;

}

int main() {
    double testarray[] = {13, 12, 9, 8, 7, 14, 6, 7, 10};
    printf("Maximul din array este %lf", max(testarray, 9));

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 a) Scrieti o functie care primeste ca parametru un vector si il initializeaza cu valori introduse de la tastatura.
//b) Scrieti o functie care primeste un vector ca parametru si il afiseaza pe ecran.
//c) Scrieti o functie care calculeaza media aritmetica a unui tablou de numere double. 
//Functia va primi ca parametri tabloul si dimensiunea acestuia si va returna media aritmetica.

#include <stdio.h>
#define N 5
void citeste_vector( double vector[ ], int n ) ;
void afiseaza_vector( double vector[ ], int n ) ;
double medie( double vector[ ], int n ) ;

int main()
{
    double data[N]={0} ;

    citeste_vector( data, N );
    afiseaza_vector(data, N);
    printf("\n");
    printf("Media aritmetica este %lf.\n", medie( data, N ));
}

void citeste_vector( double vector[ ], int n){
    for(int i=0;i<n;i++){
        scanf("%lf",&vector[i]);
    }
}
void afiseaza_vector( double vector[ ], int n){
    for(int i=0;i<n;i++){
        printf("%lf ",vector[i]);
    }
}

double medie( double vector [ ], int n){
    double ma=0;
    for(int i=0;i<n;i++){
        ma+=vector[i];
    }
    ma=ma/n;
    return ma;

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Scrieti o functie gaseste_cifra, cu doi parametri.Antetul functiei va fi
//int gaseste_cifra(int a, int b);
//Functie primeste prin intermediul parametrului a un numar natural cu cel mult 8 cifre si prin intermediul parametrului b o cifra.
//Functia returneaza numarul de aparitii ale cifrei b in scrierea numarului a.

#include <stdio.h>

int gaseste_cifra(int a, int b){

    int uc=0, contor=0;
    while(a!=0){
        uc=a%10;
        a/=10;
        if(uc==b){
            contor++;
        }
    }
    return contor;
}

int main() {
    int n, c;
    scanf("%d%d", &n, &c);
    printf("cifra %d se gaseste de %d ori in numarul %d", c, gaseste_cifra(n,c), n);

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.6 Sa se scrie o functie care calculeaza suma a doi vectori (element cu element) pe primele n pozitii (n primit de asemenea ca parametru).
// Rezultatul va fi stocat intr-un vector, primit de asemenea ca parametru.

#include <stdio.h>

void suma(int v1[], int v2[], int s[],int dim){

    for(int i=0;i<dim;i++){
        s[i]=v1[i]+v2[i];
    }

}

int main() {
    int testarray1[]={14, 13, 12, 11, 15};
    int testarray2[]={1, 12, 3, 5, 5};
    int dim = 5;
    int sumarray[5];

    suma(testarray1, testarray2, sumarray, dim);
    int i;
    printf("Vectorul suma este: ");
    for(i=0; i<dim; i++){
        if(i==dim-1) printf("%d.", sumarray[i]);
        else printf("%d, ", sumarray[i]);
    }

}
