#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int nombre;
    int essai = 5; // Ajout d'un nombre d'essai pour trouver le nombre magique

    srand(time(NULL));  
    int random_number = rand() % 100 + 1;  // Integre un nombre random compris entre 1 et 100. 

    printf("Bienvenue au jeu du Nombre Magique !\n");

    while (essai > 0) {    // Création d'une boucle qui continue tant que essai est supérieur à 0.
	nombre=-1;
        printf("Choisissez un nombre entre 1 et 100 : ");  // Demande à l'utilisateur de choisir un nombre entre 1 et 100.
        scanf("%d", &nombre);

        if (nombre < 1 || nombre > 100){// Test si le nombre est bien compris entre 1 et 100.
            printf("Erreur : Veuillez entrer un nombre entre 1 et 100.\n");  // Si, le nombre est supérieur ou inférieur alors nouvelle demande à l'utilisateur
        }
	else{
            if (nombre == random_number){  // Test si le nombre de l'utilisateur est égale avec le nombre magique
                printf("Félicitations ! Vous avez deviné le nombre %d.\n", nombre); 
                return 0;
            }
             else if (nombre > random_number){  // Test si le nombre de l'utilisateur est supérieur avec le nombre magic 
                printf("C'est moins !!\n");  // Si, il est supérieur alors le nombre est plus petit
            }
             else
		{
            	printf("C'est plus !!\n");  // Si, il n'est pas supérieur alors le nombre est plus grand
            }
		essai--; // Raccourci pour décrémente le nombre d'essai. On aurait pu mettre essai = essai - 1.
                printf("Il vous reste %d essai(s) pour trouver.\n", essai); // Ecrit un message pour signaler le nombre d'essai restant.
	    }
	}
    printf("Désolé, vous avez épuisé tous vos essais. Le nombre magique était %d.\n", random_number); // Affichage d'un message d'échec car tous les essais ont été utilisés.
    return 0;
}
