#include <stdio.h>
#include <pthread.h>

void* print_message(void* arg) {
    char* message = (char*)arg;
    for (int i = 0; i < 100; i++) {
        printf("%s\n", message);
    }
    printf("Thread %s terminé.\n", message); //on rajoute cette ligne pour dire que le threads est terminé
    return NULL;
}

int main() {
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, print_message, "Bonjour");
    pthread_create(&thread2, NULL, print_message, "Au revoir");

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Tous les threads sont terminé.\n"); // on rajoute cette ligne pour dire que tous les threads sont terminé
    return 0;
}
