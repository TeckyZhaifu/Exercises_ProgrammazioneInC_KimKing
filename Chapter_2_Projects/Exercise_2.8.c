#include <stdio.h>

int main () {
    float loan, annualRate, monthlyRate;
    float monthlyPayment;

    /* 
    Calcolare il saldo rimanente di un prestito dopo il primo, secondo e terzo pagamento mensile
    Chiedere prestito iniziale ed interesse
    L`utente paga dopo l`interesse sia stato applicato
    */

   printf("Enter amount of loan: ");
   scanf("%f", &loan);
   printf("Enter interest rate(annual, not monthly interest): ");
   scanf("%f", &annualRate);
   printf("Enter monthly payment: ");
   scanf("%f", &monthlyPayment);

   monthlyRate = annualRate / 100 / 12;
   
   loan = (loan - monthlyPayment) + (loan * monthlyRate);
   printf("Balance remaining after first payment: $%.2f\n", loan);
   loan = (loan - monthlyPayment) + (loan * monthlyRate);
   printf("Balance remaining after second payment: $%.2f\n", loan);
   loan = (loan - monthlyPayment) + (loan * monthlyRate);
   printf("Balance remaining after third payment: $%.2f\n", loan);

   return 0;
}