#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int factoriel(int nombre){
     int fact = 1;
    int i = 1;
    if (nombre == 0){
        return 1;
        }
    else{
        for( i = 1; i<=nombre; i++){
            fact = fact * i;
        }
        return fact;
    }
}
double lamda(int nbrPages, int nbrErreur){
    double lm = nbrErreur/nbrPages;
    return lm;
}
double exponentielle(double x, int n) {
    double resultat = 1.0;
    double terme = 1.0;
    for (int i = 1; i <= n; i++) {
        terme *= x / i;
        resultat += terme;
    }

    return resultat;
}
double calculProba(int k){
    int nombre;
    int nbrPages, nbrErreur;
    double x = -lamda(nbrPages, nbrErreur)*(lamda(nbrPages, nbrErreur)/factoriel(k));
    int n = 10;
    printf("Entrez le nombre des pages :\n");
    scanf("%d", &nbrPages);
     printf("Entrez le nombre des errurs :\n");
    scanf("%d", &nbrErreur);
    double proba = exponentielle(x, n);
    return proba;
}
int main(nombre)
{
    int k;
    printf("entrez k:");
    scanf("%d", &k);
    printf("%d", calculProba(k));
    return 0;
}
