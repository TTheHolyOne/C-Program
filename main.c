#include <stdio.h>
int main() {    

    int number1, number2, sum;
    
    printf("Enter two integers: \n");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      
    
    printf("%d + %d = %d", number1, number2, sum);

    printf("\nGreat Job!\nLets subtract now!\n");

    printf("Enter two numbers: \n");
    
    scanf("%d %d", &number1, &number2);
    sum = number1 - number2;
    printf("%d - %d = %d", number1, number2, sum);

    return 0;
}