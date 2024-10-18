#include<stdio.h>

int main(){
    float fahrenheit, celcius;

    printf("Digite uma temperatura em celcius: ");
    scanf("%f", &celcius);

// de fahrenheit p/celcius || celcius = (fahrenheit - 32) / 1.8;
    fahrenheit = (celcius * 1.8) + 32;

    printf("%.2f graus celcius eh o mesmo que %.2f fahrenheit\n", celcius, fahrenheit);

    return 0;
}
