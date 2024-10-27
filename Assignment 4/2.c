//Prime

#include<stdio.h>
void rangePrime();
void main()
{
    rangePrime();
}
void rangePrime()
{
    int lower, upper, i,j, isPrime;

    printf("Enter lower range: ");
    scanf("%d",&lower);
    printf("Enter upper range: ");
    scanf("%d",&upper);

    printf("Prime number between %d to %d are: ", lower, upper);

    for(i=lower; i<=upper; i++)
    {
        if(i<2)
        {
            continue;
        }
        isPrime=1;
        for(j=2; j<=i/2;j++)
        {
            if(i%j==0)
            {
                isPrime=0;
                break;
            }
        }
        if(isPrime==1)
        {
            printf("\n1%d ",i);
        }
    }
}