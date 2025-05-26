#include <stdio.h>

int main() {

    int n, i, j;

    scanf("%d", &n);
    if (n < 2) {
        return 1; // if faut que n => 2 
    }
    int tab[n];
    // declaration d'un tableau de taille n fois 
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);

    }
     // Tri partiel pour mettre les deux plus grands au début
     for (i = 0; i < 2; i++) {
        for (j = i + 1; j < n; j++) {
            if (tab[j] > tab[i]) {
                int temp = tab[i];  // variable temporaire pour l'échange
                tab[i] = tab[j];
                tab[j] = temp;  // échange avec tab[j]
            }
        }
    }

    printf("Le deuxième plus grand nombre est : %d\n", tab[1]);

    return 0;
}    
// // lire les elements d'un tableau et afficher le deuxieme plus grand s