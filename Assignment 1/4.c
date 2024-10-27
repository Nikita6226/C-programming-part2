// Check if given number is even or odd

#include <stdio.h>
void evenOdd();
void main()
{
    evenOdd();
}
void evenOdd()
{
    int no;
    printf("Enter the number: ");
    scanf("%d", &no);

    if (no % 2 == 0)
    {
        printf("Number is even");
    }
    else
    {
        printf("Number is odd");
    }
}
