#include <stdio.h>

int main () {
    float x;

    printf("Inserire valore x: ");
    scanf("%f", &x);
    printf("Il valore finale: %.2f\n", 
    (3 * x * x * x * x * x)
    + (2 * x * x * x * x)
    - (5 * x * x * x) /* Errore? Non penso intenda 5^x^3 siccome richiederebbe un ciclo */
    - (x * x)
    + (7 * x)
    - 6
    );

    printf("Il valore finale con la regola di Horner: %.2f\n",
    ((((3 * x + 2)
    * x - 5)
    * x - 1)
    * x + 7)
    * x - 6
    );
    

    return 0;
}