#include <stdio.h>

int main() {

    int n, i, j;

    scanf("%d", &n);

    int tab[n];

    if (n > 0) {
        for (i = 0; i < n; i++) {
            scanf("%d", &tab[i]);
        }
    }
   // Tri à bulles – ordre croissant
    for (i = 0; i < n - 1; i++) {
       for (j = 0; j < n - i - 1; j++) {
           if (tab[j] > tab[j + 1]) {
            int temp = tab[j];
            tab[j] = tab[j + 1];
            tab[j + 1] = temp;
           }
        }
    }
    printf("Tableau trié :");
    for (i =0; i < n; i++) {
        printf("%d ", tab[i]); 
    }
    return 0;
}
// Trier un tableau d’entiers par ordre croissant.
