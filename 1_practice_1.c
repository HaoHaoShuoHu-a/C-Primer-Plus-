#include <stdio.h>
int main(void)
{
    int x;
    printf("Please enter a length in English units and this program will convert it to metric units: (0 to quit)\n");
    while (scanf("%d", &x) && x != 0)
    {
        if (x < 0)
            printf("Error: Wrong input!\n");
        else if (x == 1)
            printf("An inch is equal to 2.54 centimeters.\n");
        else
            printf("%d inches are equal to %.2f centimeters.\n", x, x * 2.54);
        printf("Please enter a length in English units and this program will convert it to metric units: (0 to quit)\n");
    }
    printf("Program determination.");

    return 0;
}