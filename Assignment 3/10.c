//Add the (first and last) digit of a given number? 

#include<stdio.h>
void sum();
void main()
{
    sum();
}
void sum()
{
    int num, firstD, lastD;

    printf("Enter the number: "); 
    scanf("%d", &num);

    lastD= num%10;

    for( ;num>=10; num /=10)
    {
        firstD =num;
    }
    firstD= num;

    int sum = firstD + lastD;

    printf("Sum of First digit and last digit : %d", sum);
}