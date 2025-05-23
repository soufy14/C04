#include <stdio.h>

int main() {
    int n, i;
    int max;

    scanf("%d", &n);

    int tab[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }

    max = tab[0]; // supposer que le premier est le plus grand

    for (i = 1; i < n; i++) {
        if (tab[i] > max) {
            max = tab[i]; // mettre à jour si un plus grand est trouvé
        }
    }

    printf("Le maximum est : %d\n", max);

    return 0;
}
// Lire les éléments d’un tableau et afficher le plus grand 