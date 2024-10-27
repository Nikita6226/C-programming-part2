// 2. Write a program to find greatest numbers using nested if else.

#include <stdio.h>
void greatestNum();
void main()
{
    greatestNum();
}
void greatestNum()
{
    int a, b, c;
    printf("Enter the values: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
        printf("%d is graeter", a);
    if (b > a && b > c)
        printf("%d is graeter", b);
    if (c > a && c > b)
        printf("%d is graeter", c);
}