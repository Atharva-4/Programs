#include<stdio.h>

int main()
{
    int iCnt = 0;
    int iFrequency = 0;

    printf("Enter the frequency : \n");
    scanf("%d",&iFrequency);

    for(iCnt = 1; iCnt <=iFrequency; iCnt++)
    {
        printf("%d\n",iCnt);
    }
    
    return 0;
}