#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

  // déclar. variables
    int random_number;
    int proposition = 0;
    int essais = 0;

  // randomiser de 1 à 100 (pris dans l'énoncé du projet
    srand(time(NULL));
    random_number = rand() % 100 + 1;

  // la chose qui fait bip bip nous parle et elle saute des lignes   
    printf("Bienvenue dans le jeu du numero magique !\n");
    printf("J'ai choisi un nombre entre 1 et 100.\n");
    printf("Trouve le ! !\n\n");

  // while donc début boucle
    while (proposition != random_number) {

        
        printf("Entre un nombre : ");
        scanf("%d", &proposition);

        essais;


        if (proposition < 1 || proposition > 100) {
            printf("Le nombre doit etre entre 1 et 100.\n");
        }

  
        else if (proposition < random_number) {
            printf("C'est plus grand !\n");
        }

      
        else if (proposition > random_number) {
            printf("C'est plus petit !\n");
        }

     
        else {
            printf("Bravo ! Tu as trouve le nombre magique !\n");
            printf("Tu as trouve en %d essais.\n", essais);
        }

        printf("\n");
    }

    return 0;
}

