#include <stdlib.h>
#include <stdio.h>

int main(){
    int premier_nombre;
    int second_nombre;
    int resultat;
    char operation;
    printf("Bienvenue dans la mini calculatrice ! \n");
    printf("Choisissez une opération : * , + , / , - , %%");
    scanf("%c", &operation);

    printf("Choisissez un premier nombre : \n");
    scanf("%d", &premier_nombre);

    printf("Choisissez un second nombre : \n");
    scanf("%d", &second_nombre);

    if(operation == '-' )
	{
	printf("Vous avez choisi d'effectuer une soustraction.\n");
        int resultat = premier_nombre - second_nombre;
	printf("%d %c %d = %d\n", premier_nombre, operation, second_nombre, resultat);
    }
      else if(operation == '*')
	{
        printf("Vous avez choisi d'effectuer une multiplication.\n");
        int resultat = premier_nombre * second_nombre;
	printf("%d %c %d = %d\n", premier_nombre, operation, second_nombre, resultat);
    }
	else if (operation == '+')
	{
	printf("Vous avez choisi d'effectuer une addition.\n");
	int resultat = premier_nombre + second_nombre;
	printf("%d %c %d = %d\n", premier_nombre, operation, second_nombre, resultat);
    }
	else if (operation == '/')
	{
	printf("Vous avez choisi d'effectuer une division\n.");
        int resultat = premier_nombre / second_nombre;
	printf("%d %c %d = %d\n", premier_nombre, operation, second_nombre, resultat);
    }
	else if(operation == '%')
	{
	printf("Vous avez choisi d'effectuer un modulo.\n");
        int resultat = premier_nombre % second_nombre;
	printf("%d %c %d = %d\n", premier_nombre, operation, second_nombre, resultat);
    }
	else 
        {
	printf("l'operation %c n'existe pas",operation);
    }    
    return 0;
}
