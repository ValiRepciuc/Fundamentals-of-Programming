//1.1 Scrieți un program în C pentru a calcula suma tuturor elementelor vectorului

#include <stdio.h>

int main() {
    int n, suma = 0;
    int v[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    for (int i = 0; i < n; i++)
        suma = suma + v[i];
    printf("%d", suma);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.2 Scrieți un program în C pentru a stoca elemente într-un vector și afisati-l.

#include <stdio.h>

int main() {
    int n;
    int v[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &v[i]);
        printf("%d  ", v[i]);
    }
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.3 Scrieți un program în C pentru a citi n numere de valori intr-un vector și afișați-l în ordine inversă.

#include <stdio.h>

int main() {
    int n, contor = 0;
    int v[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    for (int i = n - 1; i != -1; i--) {
        contor = v[i];
        printf("%d  ", contor);
    }

    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.4 Scrieți un program în C pentru a număra un număr total de elemente duplicate dintr-un vector.

#include <stdio.h>

int main() {
    int n, c = 0;
    int v[100];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        scanf("%d", &v[i]);
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (v[i] == v[j])
                c++;
        }
    }
    printf("Numarul total de elemente duplicate este: %d", c);
    return 0;
}


~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~


//1.5 Scrieți un program în C pentru a afisa toate elementele unice dintr-un vector

#include <stdio.h>

int main() {
    int n;
    int v[100];
    scanf("%d",&n);
    for(int i=0; i<n;i++) {
        scanf("%d", &v[i]);
    }
    printf("Elementele unice gasite in vector sunt: \n");
    for(int i=0;i<n;i++) {
        int flag=0;
        for (int j = 0; j < n; j++) {
            if (v[i] == v[j] && i!=j)
                flag=1;
        }
        if(!flag)
            printf("%d ",v[i]);
    }
    return 0;
}
