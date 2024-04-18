#include<stdio.h>
#define p printf
#define s scanf

int main(void)
{
    float div, num1, num2, suma, resta, mult;
    p("Ingrese primer valor: ");
    s("%f", &num1);
    p("Ingrese segundo valor: ");
    s("%f", &num2);
    suma = num1 + num2;
    resta = num1 - num2;
    mult = num1 * num2;
    div = num1 / num2;
    p("%f + %f = %f \n", num1,num2, suma);
    p("%f - %f = %f \n", num1, num2, resta);
    p("%f * %f = %f \n", num1, num2, mult);
    p("%f / %f = %f \n", num1, num2, div);
    return 0;
}