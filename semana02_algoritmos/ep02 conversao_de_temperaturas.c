/* Implemente o programa que leia um valor real referente a uma temperatura em graus Celsius e
converta essa medida para as escalas Kelvin e Fahrenheit. */

# include <stdio.h>
int main (){
    float celsius, kelvin, farenh;

    printf("digite a temperatura em celsius: ");
    scanf("%f", &celsius);
    farenh = celsius *9/5 + 32;
    kelvin = celsius + 273.15;
    printf("\ncelsius\t\t farenheit\t kelvin\n\n");
    printf("%f\t %f\t %f\t", celsius, farenh, kelvin);

}
