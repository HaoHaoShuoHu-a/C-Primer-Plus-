#include <stdio.h>
int main(void)
{
    int x;
    printf("Please enter a length in English units and this program will convert it to metric units: (0 to quit)\n");
    scanf("%d", &x);
    printf("%d inches are equal to %.2f centimeters.\n", x, x * 2.54);

    return 0;
}
