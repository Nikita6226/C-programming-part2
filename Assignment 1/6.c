// Write a program to check if person is eligible to marry or not (male age >= 21 and female age >= 18).

#include <stdio.h>
void eligibleToMarry();
void main()
{
    eligibleToMarry();
}
void eligibleToMarry()
{
    int age;
    printf("Enter the age: ");
    scanf("%d", &age);

    if (age >= 18 && age >= 21)
    {
        printf("Female or Male is eligible to marry");
    }
    else if (age >= 18)
    {
        printf("Female is eligible to marry");
    }
    else
    {
        printf("Not eligible to marry !!");
    }
}
