// perfect no. range

#include <stdio.h>
void rangePerfect();
void main()
{
    rangePerfect();
}
void rangePerfect()
{
    int lower, upper;

    printf("Enter lower range: ");
    scanf("%d", &lower);
    printf("Enter upper range: ");
    scanf("%d", &upper);

    printf("Perfect number between %d to %d are: ", lower, upper);
    
    for (int num = lower; num <= upper; num++)
    {
        int sum=0;

        for(int i=1; i<=num/2; i++)
        {
            if(num%i==0)
            {
                sum+= i;
            }
        }
        if(sum==num && num!=0)
        printf("%d ",num);
    }
}