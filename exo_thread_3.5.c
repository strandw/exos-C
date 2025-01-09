#include <stdio.h>
#include <pthread.h>

void* print_message(void* arg) {
    char* message = (char*)arg;
    for (int i = 0; i < 50; i++) {
        printf("%s\n", message);
    }
    pthread_exit(NULL); // On utilise pthread_exit à la place de return NULL pour terminer le thread
}

int main() {
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, print_message, "Bonjour");
    pthread_create(&thread2, NULL, print_message, "Au revoir");

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    printf("Tous les threads ont terminé.\n");
    return 0;
}
