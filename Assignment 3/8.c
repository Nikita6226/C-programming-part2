//num is strong or not

#include<stdio.h>
void isStrong();
void main()
{
    isStrong();

}
void isStrong()
{
    int num, originalN, rem, sum=0;
    printf("Enter the number: ");
    scanf("%d",&num);

    originalN=num;
    while(num>0)
    {
        rem=num%10;
        int fact=1;
        for(int i=1; i<=rem; i++)
        {
            fact*=i;
        }
        sum+= fact;
        num/=10;
    }
    if(sum==originalN)
    {
        printf("%d is strong number",originalN);
    }
    else
    printf("%d is not strong",originalN);
}