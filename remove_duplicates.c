#include <stdio.h>

int main() {
    int n, i, j, k;

    scanf("%d", &n);
    int tab[n];

    // Lecture des éléments
    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    // Suppression des doublons
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; ) {
            if (tab[i] == tab[j]) {
                // Décalage vers la gauche
                for (k = j; k < n - 1; k++) {
                    tab[k] = tab[k + 1];
                }
                n--;         
            } else {
                j++;
            }
        }
    }

    printf("Après suppression des doublons : ");
    for (i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    return 0;
}
// ce programme lit un tableau d'entiers, supprime les doublons et affiche le tableau résultant