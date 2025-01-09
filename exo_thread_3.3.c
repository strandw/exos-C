#include <stdio.h>
#include <pthread.h>

int count_bonjour = 0; // on met un compteur pour chaque thread
int count_au_revoir = 0;

void* print_bonjour(void* arg) {
    for (int i = 0; i < 100; i++) {
        printf("Bonjour\n");
        count_bonjour++;
    }
    return NULL;
}

void* print_au_revoir(void* arg) {
    for (int i = 0; i < 100; i++) {
        printf("Au revoir\n");
        count_au_revoir++;
    }
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, print_bonjour, NULL);
    pthread_create(&thread2, NULL, print_au_revoir, NULL);

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Bonjour est écrit %d fois.\n", count_bonjour);// et une ligne pour afficher le nombre de fois que chaque thread a été exécuté
    printf("Au revoir est écrit %d fois.\n", count_au_revoir);

    return 0;
}
