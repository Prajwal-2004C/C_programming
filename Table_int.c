#include<stdio.h>

int main()
{
    int No1 = 0;
    int No2 = 0;
    int Sum = 0;

    printf("Enter any number to get its multiplication table:\n");
    scanf("%d",&No1);
    printf("Enter the length of expected table.For example 10 or 20 etc.\n");
    scanf("%d",&No2);

    printf("Table for the given number is:\n");
    for(int iCtr = 0; iCtr < No2; iCtr++)
    {
      Sum = Sum + No1;
      printf("%d\n",Sum);  
    }
    return 0;
}