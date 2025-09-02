#include <stdio.h>

int main() {
    int a, b, somme;

  
    printf("Entrez la première valeur : ");
    scanf("%d", &a);

    printf("Entrez la deuxième valeur : ");
    scanf("%d", &b);

   
    if (a == b) {
        somme = (a + b) * 3; 
    } else {
        somme = a + b;
    }

    
    printf("Resultat : %d\n", somme);

    return 0;
}
