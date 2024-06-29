#include <stdio.h>
#include <stdlib.h>
float fehrenheit_to_celsius(float fehrenheit)
{
    return (fehrenheit - 32) / 9 * 5;
}
float celsius_to_fehrenheit(float celsius)
{
    return ((9 * celsius) / 5) + 32;
}
int main()
{
    float temp;
    int choice;
    while (choice != 3)
    {
        printf("\n");
        printf("Temperature Convertor \n");
        printf("1. Convert fehrenheit to celsius \n");
        printf("2. Convert celsius to fehrenheit \n");
        printf("3. Exit \n");
        printf("Enter your choice");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter temperature in fehrenheit \n");
            scanf("%f", &temp);
            printf("Temperature in celsius: %.2f", fehrenheit_to_celsius(temp));
            break;
        case 2:
            printf("Enter temperature in celsius \n");
            scanf("%d", &temp);
            printf("Temperature in fehrenheit: %.2f", celsius_to_fehrenheit(temp));
            break;
        case 3:
            printf("Thank you \n");
            break;
        default:
            printf("Invalid choice! Try again!");
        }
    }
    return 0;
}
