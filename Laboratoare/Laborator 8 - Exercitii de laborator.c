//1.1 Scrieti un program care lucreaza cu o variabila globala - vector de 10 elemente intregi. 
//Definiti o functie care primeste ca parametru o valoare si cauta valoarea respectiva in vector: daca exista, functia intoarce 1, altfel intoarce 0.
//In programul principal, umpleti vectorul cu elemente citite de la tastatura, cititi o valoare, apoi demonstrati cum se utilizeaza functia definita mai sus.

#include <stdio.h>

int cautare(int v[], int x);

int main() {

    int v[10];
    for(int i=0; i<10;i++){
        scanf("%d",&v[i]);
    }
    int x;
    scanf("%d",&x);
    printf("Sirul%scontine valoarea", cautare(v,x)?" ":" NU " );

    
}
int cautare(int v[], int x){

    for(int i=0;i<10;i++) {
        if (v[i] == x)
            return 1;
    }
    return  0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 a) Scrieti o functie care primeste ca parametri un tablou unidimensional (vector) de numere intregi si 
// dimensiunea acestuia si calculeaza si returneaza maximul dintre elementele tabloului. 
//b) Scrieti o functie care primeste ca parametri un tablou unidimensional (vector) de numere intregi si 
//dimensiunea acestuia si il afiseaza la consola, cu elementele separate prin spatii.
//c)Scrieti un program C in care testati functiile implementate. programul va citi elementele unui vector de la tastatura, pana la primul 0 introdus.

#include <iostream>
using namespace std;

int maxim(int v[], int n);

void afiseaza(int v[], int n);

int main()
{
	int i = -1;
	int v[101];
	i++;
	cin >> v[i];
	while (v[i] != 0)
	{
		i++;
		cin >> v[i];
	}
	afiseaza(v, i);
	cout << "\nMaximul din vector este " << maxim(v, i);
	return 0;
}
int maxim(int v[], int n)
{

	int i = 0;	
	int maxi = v[0];
	while (v[i] != 0)
	{
		if (v[i] > maxi) 
		    maxi = v[i];
		i++;
	}
	return maxi;
}

void afiseaza(int v[], int n)
{
	cout << "Vectorul este:\n";
	for (int j = 0; j <= n; j++)
		cout << v[j] << " ";
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//a) Scrieti o functie care primeste ca parametru un vector de numere reale si dimensiunea acestuia, in care se calculeaza 
//si returneaza cate elemente din vector sunt mai mari decat media aritmetica a elementelor din vector. 
//b)  Scrieti o functie care primeste ca parametru un vector de numere reale si calculeaza si returneaza minimul din acest vector. 
//c) Scrieti un program C in care testati functiile implementate. In program se vor citi elementele vectorului de la tastatura.


#include <stdio.h>

int contor(int v[], int n){

    float ma=0;
    for(int i=0; i<n;i++){
        ma=ma+v[i];
    }
    ma=ma/n;
    int contor=0;
    for(int i=0; i<n;i++){
        if(v[i]>ma){
            contor++;
        }
    }
    return contor;
}

int minim(int v[],int n){

    int minim=0;
    minim=v[0];
    for(int i=1;i<n;i++){
        if(minim>v[i])
            minim=v[i];
    }
    return minim;

}

int main(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    printf("Minimul din vector este %d\n",minim(v,n));
    printf("%d elemente sunt >= cu media aritmetica a elementelor din vector",contor(v,n));

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 a) Scrieti o functie care primeste ca parametru un vector de numere int si dimensiunea acestuia.
//Functia calculeaza minimul din vector si se calculeaza si returneaza de cate ori apare minimul in vector. 
//b) Scrieti o functie care primeste ca parametru un vector de numere int si calculeaza si il afiseaza pe ecran. 
//c) Scrieti un program C in care testati functionalitatea functiilor implementate.

#include <stdio.h>

int contor_mini(int v[],int n){

    int contor=0;
    int minim=v[1];
    for(int i=1;i<n;i++){
        if(minim>v[i])
            minim=v[i];
    }
    for(int i=1;i<n;i++){
        if(minim==v[i])
            contor++;
    }
    return contor;
}
void afiseaza (int v[],int n){
    printf("Vectorul este");
    for(int i=0;i<n;i++){
        printf(" %d",v[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    afiseaza(v,n);
    printf("\nMinimul apare de %d in vector", contor_mini(v,n));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5a) Scrieti o functie care primeste ca parametru un vector de numere int si dimensiunea acestuia.
//Functia  calculeaza si returneaza de cate ori apare minimul in vector. 
//b) Scrieti o functie care primeste ca parametru un vector de numere int si calculeaza si il afiseaza pe ecran. 
//c) Scrieti un program C in care testati functionalitatea functiilor implementate.

#include <stdio.h>

int contor_mini(int v[],int n){

    int contor=0;
    int minim=v[1];
    for(int i=1;i<n;i++){
        if(minim>v[i])
            minim=v[i];
    }
    for(int i=1;i<n;i++){
        if(minim==v[i])
            contor++;
    }
    return contor;
}
void afiseaza (int v[],int n){
    printf("Vectorul este");
    for(int i=0;i<n;i++){
        printf(" %d",v[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    afiseaza(v,n);
    printf("\nMinimul apare de %d in vector", contor_mini(v,n));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.6a) Scrieti o functie care primeste ca parametru un vector de numere reale si dimensiunea acestuia.
//Functia calculeaza minimul din vector si se calculeaza si returneaza de cate ori apare minimul in vector. 
//b) Scrieti o functie care primeste ca parametru un vector de numere reale  si il afiseaza pe ecran. 
//c) Scrieti un program C in care testati functionalitatea functiilor implementate.

#include <stdio.h>

int contor_mini(int v[],int n){

    int contor=0;
    int minim=v[1];
    for(int i=1;i<n;i++){
        if(minim>v[i])
            minim=v[i];
    }
    for(int i=1;i<n;i++){
        if(minim==v[i])
            contor++;
    }
    return contor;
}
void afiseaza (int v[],int n){
    printf("Vectorul este");
    for(int i=0;i<n;i++){
        printf(" %d",v[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    afiseaza(v,n);
    printf("\nMinimul apare de %d in vector", contor_mini(v,n));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.7 
//a) Scrieti o functie care primeste ca parametru un vector de numere intregi si dimensiunea acestuia (un intreg n)
//si verifica daca numerele din vector sunt in progresie aritmetica. Daca sunt, functia va returna 1, altfel va returna 0.
//b) Scrieti o functie care primeste ca parametri un tablou unidimensional (vector) de numere intregi si dimensiunea 
//acestuia si il afiseaza, pe o singura linie, cu elementele despartite prin spatii.
//c) Scrieti un program C in care testati functiile implementate. Programul citeste dimensiunea, apoi elementele vectorului, de la tastatura.

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

void afiseaza(int v[],int n){
    for(int i=0;i<n;i++){
        printf("%d ",v[i]);
    }
}

int main(){
    int n; scanf("%d",&n);
    int v[n];
    for(int i=0;i<n;i++){
        scanf("%d",&v[i]);
    }
    afiseaza(v,n);
    printf("\nVectorul%seste progresie aritmetica",(progresie(v,n)?" ":" nu "));
}
