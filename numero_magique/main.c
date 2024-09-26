#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int nombre;
    int essai = 5;

    srand(time(NULL));
    int random_number = rand() % 100 + 1;

    printf("Bienvenue au jeu du Nombre Magique !\n");

    while (essai > 0) {
	nombre=-1;
        printf("Choisissez un nombre entre 1 et 100 : ");
        scanf("%d", &nombre);

        if (nombre < 1 || nombre > 100){
            printf("Erreur : Veuillez entrer un nombre entre 1 et 100.\n");
        }
	else{
            if (nombre == random_number){
                printf("Félicitations ! Vous avez deviné le nombre %d.\n", nombre);
                return 0;
            }
             else if (nombre > random_number){
                printf("C'est moins !!\n");
            }
             else
		{
            	printf("C'est plus !!\n");
            }
		essai--;
                printf("Il vous reste %d essai(s) pour trouver.\n", essai);
        }
	}
    printf("Désolé, vous avez épuisé tous vos essais. Le nombre magique était %d.\n", random_number);
    return 0;
}
