#include <stdio.h>
int main()
{
    int num1, num2, choice;
    int sum = 0, dif = 0;
    int product, div;

    printf("Enter a number: \n");
    scanf("%d", &num1);
    printf("Enter another number: \n");
    scanf("%d", &num2);

    printf(" Enter your choice: \n 1 for addition \n 2 for subtraction \n 3 for multiplication \n 4 for division \n");
    scanf("%d", &choice);

    if( choice == 1)
    {
        sum = num1 + num2;
        printf(" The sum of numbers is %d", sum);
    }
    if( choice == 2)
    {
        dif = num1 - num2;
        printf(" The difference of numbers is %d", dif);
    }
    if( choice == 3)
    {
        product = num1 * num2;
        printf(" The product of numbers is %d", product);
    }
    if( choice == 4)
    {
        div = num1 / num2;
        printf(" The division of numbers is %d", div);
    }
        return 0;
}