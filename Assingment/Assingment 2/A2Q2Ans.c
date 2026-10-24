#include<stdio.h>

void Dispaly(int iNo)
{
    while(iNo > 0)
    {
        printf("*");
        iNo--;
    }
}
int main()
{
    int iValue =0;
    printf("Enter number:");
    scanf("%d",&iValue);

    Dispaly(iValue);

    return 0;
}