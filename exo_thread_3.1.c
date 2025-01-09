#include <stdio.h>
#include <pthread.h>

void* print_message(void* arg) { // void* est un pointeur générique qui peut pointer sur n'importe quel type de données
    char* message = (char*)arg; // On cast le pointeur générique en pointeur de char
    for (int i = 0; i < 100; i++) {
        printf("%s\n", message);
    }
    return NULL; // On retourne NULL car la fonction doit retourner un pointeur
}

int main() {
    pthread_t thread1, thread2;

    pthread_create(&thread1, NULL, print_message, "Bonjour"); 
    pthread_create(&thread2, NULL, print_message, "Au revoir");

    pthread_join(thread1, NULL);
    pthread_join(thread2, NULL);

    return 0;
}
// j'ai eu beaucoup de mal a savoir faire fonctionner le code, j'ai du chercher sur internet pour comprendre comment fonctionne pthread_create et pthread_join