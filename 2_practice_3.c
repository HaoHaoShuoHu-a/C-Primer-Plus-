#include <stdio.h>
int main(void)
{
    int ages;
    printf("Please input your ages:\n");
    scanf("%d", &ages);
    printf("Your ages convert to days is: %d.", 365 * ages);

    return 0;
}