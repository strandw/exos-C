// Exercise 2.1
#include <stdio.h>
int main () {
int nbr = 5;
    int *pointeur = &nbr;// on affecte l'adresse de nbr à pointeur

    printf("voila le nombre avant modification: %d\n", nbr);
    *pointeur = 10;//exemple avec 10 
    printf("voila le nombtr après modification: %d\n", nbr);
    return 0;
}

// Exercise 2.2
int main() {
    int tab[5] = {1,2,3,4,5}; 
    int *pointeur = tab;          
  
    for (int i = 0; i < 5; i++) {
        printf("Élément %d: %d\n", i, *(pointeur + i));
    }

    return 0; 
}

// Exercise 2.3

int main (){
int tab1[5] = {1,2,3,4,5};
    int tab2[5] = {5,4,3,2,1};
    int res[5];
    int *p1 = tab1, *p2 = tab2, *pr = res; //ici on affecte les adresses des tableaux à des pointeurs 

    for (int i = 0; i < 5; i++) {
        *(pr + i) = *(p1 + i) + *(p2 + i); // ensuite on additionne les valeurs des tableaux 1 et 2 et on les stocke dans le tableau res
    }

    printf("ce que contient le tableau 1: ");
    for (int i = 0; i < 5; i++) printf("%d ", tab1[i]); // on affiche le contenu du tableau 1 et 2 et res ...
    printf("\n ce que contient le tableau 2: ");
    for (int i = 0; i < 5; i++) printf("%d ", tab2[i]);
    printf("\n voici le résultat: ");
    for (int i = 0; i < 5; i++) printf("%d ", res[i]);
    printf("\n");
    return 0;