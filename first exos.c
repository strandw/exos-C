#include <stdio.h>

int main() {
    int tab[10] = {62, 12, 86, 1, 3, 5, 7, 9, 11, 13};
    int min = tab[0];
    int max = tab[0];
    int i; 

    for (i = 0; i < 10; i++) {
        if (tab[i] < min) {
            min = tab[i];
        }
        if (tab[i] > max) {
            max = tab[i];
        }
        }

        if( t[i] > t[i+1])
            { temp = t[i];
            t[i] = t[i+1];
            t[i+1] = temp;
            }

    printf("Minimum value: %d\n", min);
    printf("Maximum value: %d\n", max);

    return 0;
}

int main() {
    int tab[10] = {56, 12, 6, 56, 8, 56, 12, 56, 56, 56};
    int nombre;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    int compt = 0;

    for (i = 0; i < 10; i++) {
        if (tab[i] == nombre) {
            compt++;
        }
    }
}
    printf("Le nombre %d est présent %d fois dans le tableau.\n", nombre, compt);

    return 0;
}

