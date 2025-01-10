#include <stdio.h>
#include <string.h>

#define MAX_PERSONNES 50 
#define TAILLE_NOM 50
#define TAILLE_TEL 11
#define TAILLE_MAIL 50

typedef struct {
    char nom[TAILLE_NOM];
    char prenom[TAILLE_NOM];
    char telephone[TAILLE_TEL];
    char email[TAILLE_MAIL];
} Personne;

Personne repertoire[MAX_PERSONNES];
int nombre_personnes = 0;



void Creer_Enregistrement() {
    if (nombre_personnes >= MAX_PERSONNES) { 
        printf("Le répertoire est plein.\n");
        return;
    }

    Personne nouvelle_personne;

    printf("Entrez le nom : \n");
    scanf("%49s", nouvelle_personne.nom);

    printf("Entrez le prénom : \n");
    scanf("%49s", nouvelle_personne.prenom);

    printf("Entrez le numéro de téléphone (10 chiffres) : \n");
    scanf("%10s", nouvelle_personne.telephone);

    printf("Entrez l'adresse mail : \n");
    scanf("%49s", nouvelle_personne.email);

    repertoire[nombre_personnes++] = nouvelle_personne;
    printf("Personne ajoutée avec succès !\n");
}

int main() {
    Creer_Enregistrement();
    return 0;
}
