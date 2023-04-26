//1.1  Se consideră un text cu maximum 255 de caractere, format din litere mici ale alfabetului englez şi spaţii. 
// Textul conţine cel puţin o consoană. Scrieţi un program C care citeşte de la tastatură textul şi  afişează pe ecran numai ultima consoană care apare în text. 
// Exemplu: dacă de la tastatură se introduce textul "Un text la intamplare" pe ecran se va afişa: r.

#include <stdio.h>
#include <string.h>

int consoana(char v[]){

    char x;
    for(int i=0; v[i]; i++){
        if(strchr("bcdfghjklmnpqrstvwxyz", v[i]))
            x=v[i];
    }
    return x;
}
int main() {

    char v[100];
    scanf("%[^\n]s", v);
    printf("Ultima consoana este %c",consoana(v));
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Scrieţi un program C care citeşte de la tastatură două şiruri de caractere formate din maximum 100 litere mici ale alfabetului englez
// şi afişează pe ecran cel mai lung sufix comun al celor două şiruri de caractere.
//Exemplu: pentru şirurile marina şi balena se va afişa na.

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
void afisare (char s[], char a[]){
    int x=strlen(s)-1, cnt=0;
    int y=strlen(a)-1; 
    while (x>0 && y>0 && s[x]==a[y]){
        x--; y--; cnt++;
    }
    for (int i=strlen(s)-cnt; s[i]; i++) printf("%c", s[i]);
}

int main (){
    char s[100], a[100], c;
    scanf("%[^\n]s", s);
    scanf ("%c", &c);
    scanf("%[^\n]s", a);
    afisare(s,a);
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Scrieţi un program care inversează un şir de caractere. Funcţia va primi doi parametri: primul parametru va fi şirul care va fi inversat,
// al doilea parametru va fi şirul obţinut prin inversare.

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


//1.4 Scrieţi un program C care citeşte un şir de caractere şi îl transformă astfel:

// a) prima literă devine majusculă;
// b) prima literă de după fiecare spaţiu sau semn de punctuaţie devine majusculă, restul literelor devin minuscule.

//De exemplu, pentru şirul citit: "Limbajul C are functii, chiar si pentru caractere." se afişeaza: "Limbajul C Are Functii, Chiar Si Pentru Caractere."

#include <stdio.h>

void majuscula(char v[]){

    for(int i=0; v[i]; i++){
        if(v[i]==' '){
            v[i+1]-=32;
        }
        if(v[i]>='!' && v[i]<'+')
            v[i]+=32;
        printf("%c",v[i]);
    }

}
int main() {

    char v[100];
    scanf("%[^\n]s", v);
    majuscula(v);

}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Scrieţi o funcţie recursivă pentru a inversa un şir de caractere introdus de la tastatură


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
