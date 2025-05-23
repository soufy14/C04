#include <stdio.h>

int main() {

    int n, i;
    int somme = 0;
    float moyenne;

    scanf("%d", &n);
    // declaration d'un tableau de taille n fois 
    int tab[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);

    }
    for (i = 0; i < n; i++) {
        somme += tab[i]; // additionner les elements
    
    }    
    
    moyenne = (float)somme / n; // Division pour obtenir la moyenne

    printf("La moyenne est : %.1f\n", moyenne);

    return 0;
}
// lire les elements d'un tableau et afficher la moyenne 