#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    int random_number;
    int proposition;
    int essais = 0;

    srand(time(NULL));
int random_number = rand() % 100 + 1;

printf("Bienvenue dans le jeu du numero magique !\n")
printf("J'ai choisi un nombre entre 1 et 100.\n")
printf("Trouve le ! !\n")

while (proposition != nombre_secret) {
	printf("Entre un nombre : ");
scanf("%d", &proposition);
essais;
if (proposition < 1 || proposition > 100) {
    printf("Le nombre doit etre entre 1 et 100.\n");
}elif (proposition < nombre_secret) 
    printf("C'est plus grand !\n")
}
