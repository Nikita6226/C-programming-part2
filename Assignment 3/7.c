//Find factorial of number.

#include<stdio.h>
void checkFact();
void main()
{
    checkFact();
}

void checkFact()
{
    int num;
    unsigned long long factorial=1;

    printf("Enter the number: ");
    scanf("%d", &num);

    if(num<0)
    {
        printf("Number %d is negative", num); 
    }   
    else
    {
        for(int i=1; i<=num ; i++)
        {
            factorial *= i;
        }
        printf("Factorial of %d is: %llu", num, factorial);
    }
}