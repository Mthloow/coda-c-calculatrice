#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main() {
    int nombre;

    srand(time(NULL));
    int random_number = rand() % 100 + 1;

    printf("Bienvenue au jeu du Nombre Magique !\n");
    
    while (1) {
        printf("Choisissez un nombre entre 1 et 100 : ");
        scanf("%d", &nombre);

        if (nombre < 1 || nombre > 100) {
            printf("Erreur : Veuillez entrer un nombre entre 1 et 100.\n");
             
        }
	else{
        
        if (nombre == random_number) {
            printf("Félicitations ! Vous avez deviné le nombre %d.\n", nombre);
            return 0;
        } else if (nombre > random_number) {
            printf("C'est moins !!\n");
        } else {
            printf("C'est plus !!\n");
        }
    }
}

    return 0;
}
